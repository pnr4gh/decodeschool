import java.util.*;
class SmaArr
{
  public static void main(String args[])
  {
     int size,i,num;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[100];
     System.out.println("Enter The Array Elements:\n");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();

	}
     int min=a[0];
     for(i=0;i<size;i++)
        {
            if(a[i]<min)
              {
                min=a[i];
              }

       }
       System.out.println("The Smallest Element In The Array Is:"+min);
  }
}
