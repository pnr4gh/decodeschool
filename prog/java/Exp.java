//To Find N power of M (Exponentiation)...

import java.util.*;

class Program
{
 public static void main(String args[])
 {
 int base,pow,product=1;
 Scanner sc=new Scanner(System.in);

 System.out.println("Enter The Base:"); 
 base=sc.nextInt();

 System.out.println("Enter The Power:");
 pow=sc.nextInt();

 while(pow>0)
 {
 product=product*base;
 pow--;
 }

 System.out.println("The Output Is:"+product);
 }
}