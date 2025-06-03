import java.util.*;
class Checker
{
  public static void main(String args[])
  {
        int num;
	Scanner sc=new Scanner(System.in);	
	System.out.println("Enter The Number:");
	num=sc.nextInt();
	while(num>=10)
	{
		num=num/10;
	}
	

	if(num%2==0)
	{
		System.out.println("The First Digit Is Even.");
	}
	else
	{
		System.out.println("The First Digit Is Odd.");
	}

  }

}