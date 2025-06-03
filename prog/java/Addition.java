import java.util.*;
class Addition
{
   public static void main(String args[])
   {
 
      int Input1,Input2,sum=0;
      Scanner sc=new Scanner(System.in);

      System.out.println("Enter The Input 1:");
      Input1=sc.nextInt();
      System.out.println("Enter The  Input 2:");
      Input2=sc.nextInt();
      sum=Input1+Input2;
      System.out.println("The Output Is:\n"+sum);
   }

}
