//To Delete An Element From An Array...

import java.util.*;

class Program
{
 public static void main(String args[])
 {
 int i,size,del;
 Scanner sc=new Scanner(System.in);

 System.out.println("Enter The Size:");
 size=sc.nextInt();

 int a[]=new int[size];
 System.out.println("Enter The Array Elements:");
 for(i=0;i<size;i++)
 {
 a[i]=sc.nextInt();
 }

 System.out.println("Enter The Element To Be Deleted:"); 
 del=sc.nextInt();

 for(i=0;i<size;i++)
 {
 if(a[i]==del)
 {

 while(i<size-1)
 { 
 a[i]=a[i+1];
 i++;
 }

 }
 }

 System.out.println("The Output Is:");
 for(i=0;i<size-1;i++)
 {
 System.out.println(" "+a[i]);
 }

 }
}