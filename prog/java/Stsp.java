//Print The Character Of String With Space...

import java.util.*;

class Program
{
 public static void main(String args[])
  {
     String word;
     Scanner sc=new Scanner(System.in);

     System.out.println("Enter The Word:");  
     word=sc.nextLine();  

     int len1=word.length();
     int i;

     System.out.println("The Output Is:");
     for(i=0;i<len1;i++)
       {
            System.out.println(" "+word.charAt(i));
            System.out.println(" ");
       }

  }
}