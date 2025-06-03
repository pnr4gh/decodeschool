import java.util.*;
class SAvArray
{
  public static void main(String args[])
  {
     int size,i,sum=0;
     double avg;     
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[size];
     System.out.println("Enter The Array Elements:\n");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();
	    sum=sum+a[i];
	}
     System.out.println("The Sum Of Array Elements Is:\n"+sum);
     avg=sum/size;
     System.out.println("The Average Is:"+avg);
     

  }
}