import java.util.*;
class SumOfNEven
 {
    public static void main(String args[])
    {
       int i,j,N,sum=0;
       System.out.println("Enter The Value Of N");
       Scanner sc=new Scanner(System.in);
       N=sc.nextInt();

       for(j=1,i=2;j<=N;i=i+2,j++)
       {
            sum=sum+i;
       }
            System.out.println("The Sum Of N Even Numbers: "+sum);
    }
}