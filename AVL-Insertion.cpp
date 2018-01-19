#include<bits/stdc++.h>
using namespace std;
struct node{
	struct node* left;
	struct node* right;
	int data;
}*root=NULL;
class avltree{
	public:
	int height(node*);
	int diff(node*);
	node* rr_rotation(node*);
	node* lr_rotation(node*);
	node* rl_rotation(node*);
	node* ll_rotation(node*);
	node* balance(node*);
	node* insert(node*,int);
	void display(node*,int);
	void inorder(node*);
	void preorder(node*);
	void postorder(node*);
};
main(){
	int choice, item;
    avltree avl;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"AVL Tree Implementation"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the tree"<<endl;
        cout<<"2.Display Balanced AVL Tree"<<endl;
        cout<<"3.InOrder traversal"<<endl;
        cout<<"4.PreOrder traversal"<<endl;
        cout<<"5.PostOrder traversal"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice){
        	   case 1:
            cout<<"Enter value to be inserted: ";
            cin>>item;
            root = avl.insert(root, item);
            break;
        case 2:
            if (root == NULL)
            {
                cout<<"Tree is Empty"<<endl;
                continue;
            }
            cout<<"Balanced AVL Tree:"<<endl;
            avl.display(root, 1);
            break;
        case 3:
            cout<<"Inorder Traversal:"<<endl;
            avl.inorder(root);
            cout<<endl;
            break;
        case 4:
            cout<<"Preorder Traversal:"<<endl;
            avl.preorder(root);
            cout<<endl;
            break;
        case 5:
            cout<<"Postorder Traversal:"<<endl;
            avl.postorder(root);    
            cout<<endl;
            break;
        case 6:
            exit(1);    
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }

		}
	
}
int avltree::height(node* temp){
	int h=0;
	if(temp!=NULL){
		int l_height=height(temp->left);
		int r_height=height(temp->right);
		int max_height=max(l_height,r_height);
		h=max_height+1;
	}
	return h;
}
int avltree::diff(node *temp){
		int l_height=height(temp->left);
		int r_height=height(temp->right);
		int b_factor=l_height-r_height;
		return b_factor;
}
//Here parent is the node where  imbalance occurs
node* avltree::rr_rotation(node* parent){
	struct node* temp;
	temp=parent->right;
	parent->right=temp->left;
	temp->left=parent;
	return temp;
}

node* avltree::ll_rotation(node* parent){
	struct node* temp;
	temp=parent->left;
	parent->left=temp->right;
	temp->right=parent;
	return temp;
}

node* avltree::lr_rotation(node* parent){
	struct node* temp;
	temp=parent->left;
	parent->left=rr_rotation(temp);
	return ll_rotation(parent);
}

node* avltree::rl_rotation(node* parent){
	struct node* temp;
	temp=parent->right;
	parent->right=ll_rotation(temp);
	return rr_rotation(parent);
}

node* avltree::balance(node* temp){
	int bal_factor=diff(temp);
	if(bal_factor>1){
		if(diff(temp->left)>0)
		temp=ll_rotation(temp);
	else if(bal_factor<1)
		temp=lr_rotation(temp);
	}
	else if(bal_factor<-1){
		if(diff(temp->right)<0)
		temp=rr_rotation(temp);
		else
		temp=rl_rotation(temp);
	}
	return temp;
}
node* avltree::insert(node* root,int value){
	if(root==NULL){
		root=(struct node*)malloc(sizeof(struct node));
		root->data=value;
		root->left=NULL;
		root->right=NULL;
		return root;
	}
	else if(value < root->data){
		root->left=insert(root->left,value);
		root=balance(root);
	}
	else if(value > root->data){
		root->right=insert(root->right,value);
		root=balance(root);
	}
	return root;
}
//root given as input here
void avltree::display(node* ptr,int level){
	int i;
	if(ptr!=NULL){
		display(ptr->right,level+1);
		cout<<endl;
		if(ptr==root)
		cout<<"ROOT->";
		for(i=0;i<level && ptr!=root;i++)
		cout<<"       ";
		cout<<ptr->data;
		display(ptr->left,level+1);
	}
	
}

void avltree::inorder(node* root){
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

void avltree::preorder(node* root){
	if(root==NULL)
	return;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}

void avltree::postorder(node* root){
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}
