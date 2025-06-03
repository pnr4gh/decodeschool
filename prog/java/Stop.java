//To Find The Sum Of Multiple Positive Number,Stops If user Enters Negative Numbers...

import java.util.*;

class Program
{
 public static void main(String args[])
  {
      int size,sum=0,i;
      Scanner sc=new Scanner(System.in);

      System.out.println("Enter The Size Of Array:");
      size=sc.nextInt();

      int a[]=new int[size];
      System.out.println("Enter The Array Elements:");

      for(i=0;i<size;i++)
       { 
             a[i]=sc.nextInt();
       }

      for(i=0;i<size;i++)
       {

            if(a[i]>0)
              {
                   sum=sum+a[i];
              }
           else
             {
                    break;
             }

        }

        System.out.println("The Sum Is:"+sum);

   }
}