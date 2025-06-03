import java.util.*;
class Multiplication
{
      public static void main(String args[])
      {
 
           int Input1,Input2,product;
           Scanner sc=new Scanner(System.in);

           System.out.println("Enter The Input 1:");
           Input1=sc.nextInt();
           System.out.println("Enter The Input 2:");
           Input2=sc.nextInt();
           product=Input1*Input2;
           System.out.println("The Output Is:\n"+product);
      }

}