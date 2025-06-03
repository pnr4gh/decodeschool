import java.util.*;
class Converter
{
   public static void main(String args[])
   {
       double fahreheit,celsius;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter The Celsius:");
       celsius=sc.nextDouble();
       fahreheit=celsius*1.8+32;
       System.out.println("The Fahreheit Is:"+fahreheit);
   }
}