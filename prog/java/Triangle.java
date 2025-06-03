import java.util.*;
class Triangle
{
 
       public static void main(String args[])
       {
 
             double base,height;
             double area;
             Scanner sc=new Scanner(System.in);
             System.out.println("Get base and height of Triangle and find area of Triangle");
             System.out.println("Enter The Base:");
             base=sc.nextInt();
             System.out.println("Enter The Height:");
             height=sc.nextInt();
             area=0.5*base*height;
             System.out.println("The Output 1 Is:\n"+area);

        }

}