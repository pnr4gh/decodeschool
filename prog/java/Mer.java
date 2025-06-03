//Merging Two Arrays...

import java.util.*;

class Program
{
 public static void main(String args[])
 {
 int i,j=0,sz1,sz2;
 Scanner sc=new Scanner(System.in);

 System.out.println("Enter The Size Of First Array:");
 sz1=sc.nextInt();


 int a[]=new int[sz1];

 System.out.println("Enter The First Array:");
 for(i=0;i<sz1;i++)
 {
 a[i]=sc.nextInt();
 }

 
 System.out.println("Enter The Size Of Second Array:");
 sz2=sc.nextInt();
 
 int b[]=new int[sz2];
 int c[]=new int[sz1+sz2];
  
 System.out.println("Enter The Second Array:");
 for(i=0;i<sz2;i++)
 { 
 b[i]=sc.nextInt();
 }

 for(i=0;i<sz1;i++)
 {
 c[j]=a[i];
 j++; 
 }

 for(i=0;i<sz2;i++)
 {
 c[j]=b[i];
 j++;
 }

 System.out.println("The Merging Of Two Arrays:");
 for(i=0;i<sz1+sz2;i++)
 {
 System.out.println(" "+c[i]);
 }

 }
}