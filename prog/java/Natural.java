import java.util.*;
class Natural
{
   public static void main(String args[])
   {
	int limit,i;
	System.out.println("Enter The Limit:");
	Scanner sc=new Scanner(System.in);
     	limit=sc.nextInt();
	System.out.println(" The First Natural Numbers are:\n");
	for(i=1;i<=limit;i++)
	{
		System.out.print(" "+i);
      	}
    }
}