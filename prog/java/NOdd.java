import java.util.*;
class NOdd
 {
    public static void main(String args[])
    {
       int i,lim;
       System.out.println("Enter The Value Of N");
       Scanner sc=new Scanner(System.in);
       lim=sc.nextInt();
       System.out.println("The N Odd Numbers: ");
       for(i=1;i<=lim;i=i+2)
       {
            System.out.println(""+i);
       }
    }
}