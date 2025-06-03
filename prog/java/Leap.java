//To Find Whether Given Year Is Leap Year Or Not...

import java.util.*;

class Program
{
   public static void main(String args[])
   {
       int year;
       Scanner sc=new Scanner(System.in);

       System.out.println("Enter The Year:");
       year=sc.nextInt();

       if(year%4==0)
        {
                 System.out.println("This is Leap Year...");
        }

       else
        {
               System.out.println("Not A Leap Year...");
        }

   }
}