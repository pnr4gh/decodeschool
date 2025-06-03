//To Find The Second Smallest Element In The Array...

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

     int min=a[0];
   for(i=0;i<size;i++)
     {

          if(min>a[i])
           {
                   min=a[i];
           }

      }

    System.out.println("The First Smallest Element In The Array Is:"+min);

    int j=0;
    for(i=0;i<size;i++)
       {
            if(a[i]>min)
              {
                    c[j]=a[i];
                     j++;
              }

       }

     int min1=c[0];
     for(i=0;i<size-1;i++)
      {
             if(min1>c[i])
              {
                   min1=c[i];
              }
       }

      System.out.println("The Second Smallest Element In The Array Is:"+min1);

    }
}
