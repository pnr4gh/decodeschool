//To Check The Given String Is Palindrome...

import java.util.*;

class Program
{
  public static void main(String args[])
  {
    String str,str1="";
    int i;

   Scanner sc=new Scanner(System.in);

   System.out.println("Enter The String:");
   str=sc.next();

   int len=str.length();
   for(i=len-1;i>=0;i--)
    {
        str1=str1+str.charAt(i);
    }

  System.out.println("The Reversed String Is:"+str1); 
  if(str.equals(str1))
    {
        System.out.println("This Is Palindrome...");
    }  
 else
  {
       System.out.println("Not A Palindrome...");
  }

   }
}