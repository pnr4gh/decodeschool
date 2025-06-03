import java.util.*;
class Subtraction
{
      public static void main(String args[])
      {
 
            int Input1,Input2,difference;
            Scanner sc=new Scanner(System.in);

            System.out.println("Enter The Input 1:");
            Input1=sc.nextInt();
            System.out.println("Enter The Input 2:");
            Input2=sc.nextInt();
            difference=Input1-Input2;
            System.out.println("The Output Is:\n"+ difference);
       }

}