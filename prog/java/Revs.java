//To Reverse The Given String...

import java.util.*;

class Program
{
  public static void main(String args[])
  {
    String str,str1=" ";
    int i;

   Scanner sc=new Scanner(System.in);

   System.out.println("Enter The String:");
   str=sc.next();

   int len=str.length();
   for(i=len-1;i>=0;i--)
    {
        str1=str1+str.charAt(i);
    }

   System.out.println("The Output Is:"+str1);
  }

}