//Compare Two Strings Are Equal... 

import java.util.*;

class Program
{
  public static void main(String args[])
 {
     String str1,str2;
     Scanner sc=new Scanner(System.in);

     System.out.println("Enter The String 1:");
     str1=sc.next();

    System.out.println("Enter The String 2:");
    str2=sc.next();

    if(str1.equals(str2))
    {
         System.out.println("Both Are Equal.");
    }

  else
   {
     System.out.println("Not Equal..");
   }

 }
}

