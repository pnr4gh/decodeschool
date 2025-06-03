import java.util.*;
class SwapWOT
{
  public static void main(String args[])
  {
     int input1,input2;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter The Input 1:");
     input1=sc.nextInt();
     System.out.println("Enter The Input 2:");
     input2=sc.nextInt();
     input1=input1+input2;
     input2=input1-input2;
     input1=input1-input2;   
     System.out.println("Now The Inputs After Swapping is:");
     System.out.println("The Output is:");
     System.out.println("The Input 1 is:"+input1);
     System.out.println("The Input 2 is:"+input2);
 }

}
