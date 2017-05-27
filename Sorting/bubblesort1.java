class bubblesort1{


public static void main(String args[]){
int []a={36,5,9,25,3};
bubbalo ob=new bubbalo();
for(int i=0;i<a.length;i++){
for(int j=1;j<a.length-i;j++){
if(a[j-1]>a[j]){
ob.swap(a[j-1],a[j]);
}}}


for(int i=0;i<5;i++)
System.out.println(a[i]+" ");
}}

class bubbalo{
	void swap(int a,int b){
int t;
t=a;
a=b;
b=t;
}
}