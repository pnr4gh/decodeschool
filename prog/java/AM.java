// To Add Two Matrix....

import java.util.*;

class Program
{
 public static void main(String args[])
 {
 int m,n,i,j;
 Scanner sc=new Scanner(System.in);

 System.out.println("Enter The No.of Rows:");
 m=sc.nextInt();

 System.out.println("Enter The No.of Columns:"); 
 n=sc.nextInt();

 int a[][]=new int[m][n];
 int b[][]=new int[m][n];
 int c[][]=new int[m][n];

 System.out.println("Enter The First Matrix:");
 for(i=0;i<m;i++)
 { 

 for(j=0;j<n;j++)
 {
 a[i][j]=sc.nextInt();
 } 

 }

 System.out.println("Enter The Second Matrix:");
 for(i=0;i<m;i++)
 { 

 for(j=0;j<n;j++)
 { 
 b[i][j]=sc.nextInt();
 }

 }

 System.out.println("The Addition Of Two Matrix:");
 for(i=0;i<m;i++)
 {

 for(j=0;j<n;j++)
 {
 c[i][j]=a[i][j]+b[i][j];
 }

 }

 for(i=0;i<m;i++)
 {

 for(j=0;j<n;j++)
 {
 System.out.println(" "+c[i][j]);
 } 

 }

}
}