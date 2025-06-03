import java.util.*;
class LarArr
{
  public static void main(String args[])
  {
     int size,i,num;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[size];
     System.out.println("Enter The Array Elements:\n");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();

	}
     int max=a[0];
     for(i=0;i<size;i++)
        {
            if(a[i]>max)
              {
                max=a[i];
              }

       }
       System.out.println("The Largest Element In The Array Is:"+max);
  }
}