import java.util.*;
class Grade
{
  public static void main(String args[])
  {
        int mark;
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter The Mark:");
	mark=sc.nextInt();
	if(mark>95&&mark<=100)
	{
		System.out.println("O Grade");
	}
	else if(mark>90&&mark<=95)
	{
		System.out.println("A grade");
	}
	else if(mark>80&&mark<91)
	{
		System.out.println("B Grade");
	}
	else if(mark>70&&mark<81)
	{
		System.out.println("C Grade");
	}
	else if(mark>60&&mark<71)
	{
		System.out.println("D Grade");
	}
	else if(mark>49&&mark<61)
	{
		System.out.println("E Grade");
	}
	else if(mark>=0&&mark<50)
	{
		System.out.println("F Grade");
	}
	else
	{
		System.out.println("Invalid Mark");
	}
  }
}