import java.util.Scanner;

public class insertionsort{
	

public static void insertion(int []arr){
int swap;
int index;
for(int i=0;i<arr.length;i++)
{
for(int j=i+1;j<arr.length-1;j++)
{

if(arr[j-1]<arr[j])
{
index=j;
swap=arr[i];
arr[i]=arr[index];
arr[index]=swap;
}

}
}

System.out.println("\nNew arrray after insertion sorting:::");
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
insertion(array);



}

}