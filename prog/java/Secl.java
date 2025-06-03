//To Find Second Largest Element In The Array...

import java.util.*;

class Program
{
  public static void main(String args[])
   {
      int size,i;
      Scanner sc=new Scanner(System.in);

      System.out.println("Enter The Size Of The Array:");
      size=sc.nextInt();

      int a[]=new int[size];
      int c[]=new int[size-1];

      System.out.println("Enter The Array Elements:");

      for(i=0;i<size;i++)
       {
           a[i]=sc.nextInt();
       }

      int max=a[0];
      for(i=0;i<size;i++)
       {

          if(max<a[i])
           {
                 max=a[i];
           }

      }

      System.out.println("The First Largest Element In The Array Is:"+max);

      int j=0;
     for(i=0;i<size;i++)
     {
          if(a[i]<max)
           {
               c[j]=a[i];
               j++;
           }

       }


    int max1=c[0];
    for(i=0;i<size-1;i++)
    {
         if(max1<c[i])
         {
              max1=c[i];
         }
    }

    System.out.println("The Second Largest Element In The Array Is:"+max1);

  }
}
