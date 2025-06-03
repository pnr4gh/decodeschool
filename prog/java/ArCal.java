import java.util.*;
class Calculator
{
    public static void main(String args[])
    {
	int num1,num2;
        double output=0;
	char operator;
        Scanner sc=new Scanner(System.in);
	System.out.println("Enter a Binary Expression:");
	num1=sc.nextInt();
     	operator=sc.next().charAt(0);
      num2=sc.nextInt();
        switch(operator)
	{
		case '+':
			output=num1+num2;
			break;
		case '-':
			output=num1-num2;
			break;
		case '*':
			output=num1*num2;
			break;
		case '/':
			output=num1/num2;
			break;
		case '%':
			output=num1%num2;
			break;
		default :
			System.out.println("invalid operation");
			break;
	}
	System.out.println("The Output Is:"+output);
   }
}