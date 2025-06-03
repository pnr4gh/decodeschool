import java.util.*;
class LastDTh
{
  public static void main(String args[])
  {
     int input1,digit;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter The Input:");
     input1=sc.nextInt();
     digit=input1%10;
     if((digit)%3==0)
       {
          System.out.println("The Last Digit Is Divisible By 3.");
       }
    else
       {
          System.out.println("The Last Digit Is Not Divisible By 3.");
       }

  }

}
