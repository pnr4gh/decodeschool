import java.util.*;
class KmToMts
{
     public static void main(String args[])
     {
          float km,metres;
          Scanner sc=new Scanner(System.in);
          System.out.println("Enter The Kilo Meters:");
          km=sc.nextFloat();
          metres=km*1000;
          System.out.printf("The Output 1 Is:\n%.0f",metres);
      }
}