import java.util.*;
class ThreeD
{ 
   public static void main(String args[])
   {

	int num;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter The Number:");
	num=sc.nextInt();
	if(num>99 && num<1000)
	{
		System.out.println("It is a Three Digit Number.");
	}
	else
	{
		System.out.println("It is Not a Three Digit Number.");
	}

   }
}
