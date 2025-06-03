import java.util.*;
class LastDEqual
{
  public static void main(String args[])
  {
     int num1,num2;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter two numbers:");
     num1=sc.nextInt();
     num2=sc.nextInt();
	if(num1%10==num2%10)
	{
		System.out.println("Last Digits Are Equal.");
	}
	else
	{
		System.out.println("Last Digits Are Not Equal.");
	}
  }
}