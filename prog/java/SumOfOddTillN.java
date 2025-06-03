import java.util.*;
class SumOfNOdd
 {
    public static void main(String args[])
    {
       int i,j,N,sum=0;
       System.out.println("Enter The Value Of N");
       Scanner sc=new Scanner(System.in);
       N=sc.nextInt();
       System.out.println("The N Odd Numbers: ");
       for(i=1;i<=N;i+=2)
       {
            sum=sum+i;
       }
       System.out.println("The Sum Of N Odd Numbers: "+sum);
    }
}