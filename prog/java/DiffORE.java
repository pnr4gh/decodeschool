import java.util.*;
class Checker
{
  public static void main(String args[])
  { 
     int input1,input2,diff;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter The Input 1:");
     input1=sc.nextInt();
     System.out.println("Enter The Input 2:");
     input2=sc.nextInt();
     diff=input1-input2;
     if((diff)%2==0)
       {
	 System.out.println("The Difference is Even.");
       }

    else
      {
        System.out.println("The Difference is Odd.");
      }


  }
}