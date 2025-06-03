import java.util.*;
class NEven
 {
    public static void main(String args[])
    {
          int i,lim;
          System.out.println("Enter The Value Of N");
          Scanner sc=new Scanner(System.in);
          lim=sc.nextInt();
          System.out.println("The N Even Numbers: ");
          for(i=2;i<=lim;i=i+2)
              {
                   System.out.println(""+i);
              }
    }
}