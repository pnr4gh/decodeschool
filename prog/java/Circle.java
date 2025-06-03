import java.util.*;
class Circle
{
 
    public static void main(String args[])
    {
 
        double radius;
        double area;
        Scanner sc=new Scanner(System.in);
        System.out.println("Get the radius of Circle and find area of Circle");
        System.out.println("Enter The radius:");
        radius=sc.nextDouble();
        area=3.14*radius*radius;
        System.out.println("The Output 1 Is:\n"+area);

    }

}