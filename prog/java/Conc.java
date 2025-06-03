//Concate Two Given Strings...

import java.util.*;

class Program
{
  public static void main(String args[])
 {
      String str1,str2,str3;
     Scanner sc=new Scanner(System.in);

    System.out.println("Enter The String 1:");
    str1=sc.next();

   System.out.println("Enter The String 2:");
   str2=sc.next();

   str3=str1.concat(str2);

   System.out.println("The Output Is:"+str3);

 }
}

