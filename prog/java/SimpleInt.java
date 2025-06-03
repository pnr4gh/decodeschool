import java.util.*;
class SimpleInt
{
 public static void main(String args[])
 {
   int n,p;
   double rate,si;
   Scanner sc=new Scanner(System.in);
   System.out.println("Enter The Number Of Months:");
   n=sc.nextInt();
   System.out.println("Enter The Rate:");
   rate=sc.nextDouble();
   System.out.println("Enter The Principle Amount:");
   p=sc.nextInt();
   si=(p*rate*n)/100;
   System.out.println("The Simple Interest Is:"+si);
 }

}