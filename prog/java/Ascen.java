import java.util.*;
class Ascending
{
  public static void main(String args[])
  {
     int size,i,j,num,temp;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[100];
     System.out.println("Enter The Array Elements:\n");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();

	}

    for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	System.out.println("After Sorting It Is In Ascending Order:");
	for(i=0;i<size;i++)
	{
	     System.out.println(""+a[i]);
	}
  }
}