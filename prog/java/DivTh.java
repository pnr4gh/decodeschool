import java.util.*;
class Checker
{

  public static void main(String args[])
  {
    int num;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter The Number:");
    num=sc.nextInt();

    if(num%3==0)
       System.out.println("The Number Is Divisible By 3.");

    else
    {
       System.out.println("The Number Is Not Divisible By 3.");
    }

  }

}