import java.util.*;
class NaturalInRev
{
   public static void main(String args[])
   {
	int lim,i;
	System.out.println("Enter The Limit:");
	Scanner sc=new Scanner(System.in);
     	lim=sc.nextInt();
	System.out.println(" The Natural Numbers Is In Reverse Order:");
	for(i=lim;i>=1;i--)
	{
		System.out.print(" "+i);
      	}
    }
}