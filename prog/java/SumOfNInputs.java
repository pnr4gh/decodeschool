import java.util.*;
class SumOfNInputs
  {
     public static void main(String args[])
     {
          int i,n,num,sum=0;
          System.out.println("Enter Number Of Numbers You Want To Sum");
          Scanner sc=new Scanner(System.in);
          n=sc.nextInt();
          System.out.println("Enter The Numbers To Sum");
          for(i=1;i<=n;i++)
          {
                num=sc.nextInt();
                sum=sum+num;
          }
         System.out.println("The Sum Is: "+sum);
     }
}