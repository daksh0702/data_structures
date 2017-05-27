import java.util.Scanner;

public class bubblesort{
	

public static void bubble(int []arr){
int swap;



for(int i=0;i<arr.length;i++)
{
for(int j=1;j<arr.length-i;j++)
{
if(arr[j-1]>arr[j]){
swap=arr[j];
arr[j]=arr[j-1];
arr[j-1]=swap;
}
}
}




System.out.println("\nNew arrray after bubble sorting:::");
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
bubble(array);



}

}