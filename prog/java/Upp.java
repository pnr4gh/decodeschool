//Convert LowerCase Characters To UpperCase Characters...

import java.util.*;

class Program
{
 public static void main(String args[])
 {
    String str1,str2;
    Scanner sc=new Scanner(System.in);

   System.out.println("Enter The String:");
   str1=sc.next();

   str2=str1.toUpperCase();

   System.out.println("The Output Is:"+str2);
 }
}

