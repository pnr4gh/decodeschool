import java.util.*;
import java.lang.Math.*;
class Distance
{
 
  public static void main(String args[])
  {
   int x1,x2,y1,y2;
   int x,y;
   double distance;
   Scanner sc=new Scanner(System.in);
   System.out.println("Enter The Coordinates:");
   
   x1=sc.nextInt();
   x2=sc.nextInt();
   y1=sc.nextInt();
   y2=sc.nextInt();

   x=x2-x1;
   y=y2-y1;
   distance=Math.sqrt((x*x)+(y*y));
   System.out.println("The Distance Is:"+distance );
  }

}