import java.util.*;
class Whole
{
   public static void main(String args[])
   {
	int lim,i;
	System.out.println("Enter The Limit:");
	Scanner sc=new Scanner(System.in);
     	lim=sc.nextInt();
	System.out.println(" The First Whole Numbers are:");
	for(i=0;i<=lim;i++)
	{
		System.out.print(" "+i);
      	}
    }
}