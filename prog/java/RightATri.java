import java.util.*;
class RightATri
{
 
       public static void main(String args[])
       {
 
           float length,breadth,area;
           Scanner sc=new Scanner(System.in);
           System.out.println("Get the length and breadth of Right Angled Triangle and find area of it.");
           System.out.println("Enter The length:");
           length=sc.nextInt();
           System.out.println("Enter The breadth");
           breadth=sc.nextInt();
           area=(length*breadth)/2;
           System.out.println("The Output 1 Is:\n"+area);

       }

}