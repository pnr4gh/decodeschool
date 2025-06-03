//Find the Location of given substring in a String...

import java.util.*;

class Program
{
  public static void main(String args[])
 {
    int i,k,count=0;
    String full,half;
    Scanner sc=new Scanner(System.in);

    System.out.println("Enter The String:");
    full=sc.next();

    System.out.println("Enter The Sub-String:");
    half=sc.next();

    int len1=full.length();
    int len2=half.length();

    for(i=0;i<len1;i++)
    {
         int j=0,b=0;

        if(full.charAt(i)==half.charAt(j))
          {

                 for(k=i;j<len2;k++,j++)
                    {

                         if(full.charAt(k)==half.charAt(j))
                           {
                               System.out.println("The Occurences Is:"+k); 
                           }

                     }

           }

     }


   }
}