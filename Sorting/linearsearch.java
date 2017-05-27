import java.util.*;
public class linearsearch{
public static void main(String args[]){
Scanner in=new Scanner(System.in);
int a[]={1,2,3,2,4,3,8,9};
System.out.println("Enter the element to be searched");
int b=in.nextInt();
int k=0;
for(int i=a.length-1;i>=0;i--){
	if(a[i]==b){
		System.out.println("Element present in the list at index:"+i);
		k++;
		}}
	if(k==0)
	{
			System.out.println("Element not present in the list");
	}	
		
}}