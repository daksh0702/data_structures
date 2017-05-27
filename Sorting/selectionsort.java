import java.util.Scanner;

public class selectionsort{
	

public static void selection(int []arr){
int swap;
int index;

for(int i=0;i<arr.length-1;i++)
{
index=i;
for(int j=i+1;j<arr.length;j++)
{
if(arr[j]<arr[i]){
index=j;
swap=arr[i];
arr[i]=arr[index];
arr[index]=swap;
}
}}
System.out.println("\nNew arrray after selection sorting:::");
for(int i=0;i<arr.length;i++)
System.out.print(arr[i]+" ");
}

public static void main(String  args[]){
Scanner input=new Scanner(System.in);	
System.out.println("Enter size of array following it its elements" );

int size=input.nextInt();
int array[]=new int[size];

for(int i=0;i<size;i++)
{
array[i]=input.nextInt();
}
System.out.println("Entered arrray:::");
for(int i=0;i<size;i++)
System.out.print(array[i]+" ");
selection(array);



}

}