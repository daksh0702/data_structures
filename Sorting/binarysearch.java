import java.util.*;
class binarysearch{
public static void main(String args[]){
Scanner input=new Scanner(System.in);
System.out.println("Enter the no of elements then the elements to be stored in sorted order to carry out the search ");
int b=input.nextInt();
int a[]=new int[b];
for(int i=0;i<b;i++)
{
a[i]=input.nextInt();
}
System.out.println("Enter element to be searched");
int s=input.nextInt();
int first,last,middle;
first=0;
last=a.length-1;
middle=(first+last)/2;

		if(first>last)
		System.out.println("Search is not possible");
	
while(first<=last)
{
		if(a[middle]==s) {
			
			System.out.println("Required element found at the index:"+middle);
			break;
		}
	else if(a[middle]<s)
	{
		first=middle+1;
		middle=(first+last)/2;
	}
	
	else
	{
		last=middle-1;
		middle=(first+last)/2;
	}
	
	
	


}
}}