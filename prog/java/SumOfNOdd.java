import java.util.*;
class SumOfNOdd
 {
    public static void main(String args[])
    {
       int i,j,N,sum=0;
       System.out.println("Enter The Value Of N");
       Scanner sc=new Scanner(System.in);
       N=sc.nextInt();
       for(j=1,i=1;j<=N;i=i+2,j++)
       {
            sum=sum+i;
       }
        System.out.println("The Sum Of N Odd Numbers: "+sum);
    }
} 