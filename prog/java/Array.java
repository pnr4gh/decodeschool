import java.util.*;
class Array
{
  public static void main(String args[])
  {
     int size,i;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[size];
     System.out.println("Enter The Array Elements:\n");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();
	}
     System.out.println("The Array Elements are:");
     for(i=0;i<size;i++)
	{

	   System.out.print(" "+a[i]);

	}
	


  }
}