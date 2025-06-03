import java.util.*;
class Convertor
{
 
      public static void main(String args[])
      {
		float km,metres;
           Scanner sc=new Scanner(System.in);
           System.out.println("Enter The Meters:");
           metres=sc.nextInt();
           km=metres/1000;
           System.out.println("The Output 1 Is:\n"+km);
      }
}