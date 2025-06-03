import java.util.*;
class Rectangle
{
 
       public static void main(String args[])
       {
 
             int length,breadth,area;
 		   Scanner sc=new Scanner(System.in);
             System.out.println("Get length and breadth of Rectangle and find area of Rectangle");
             System.out.println("Enter The length :");
             length=sc.nextInt();
             System.out.println("Enter The breadth :");
             breadth=sc.nextInt();
             area=length*breadth;
             System.out.println("The Output 1 Is:\n"+area);

       }

}