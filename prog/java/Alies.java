import java.util.*;
class Alphabets
{
    public static void main(String args[])
    {
        char i;
	char start,stop;
        Scanner sc=new Scanner(System.in);	
        System.out.println("Enter Two Alphabets:");
	start=sc.next().charAt(0);
        stop=sc.next().charAt(0);
	System.out.println("The Output Is:");
	for(i=start;i<=stop;i++)
	  {
		System.out.print(" "+i);
	  }
    }
}