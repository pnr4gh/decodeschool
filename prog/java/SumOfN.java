import java.util.*;
class SumOfN
  {
    public static void main(String args[])
    {
      int i,lim,sum=0;
      System.out.println("Enter The Limit:");
      Scanner sc=new Scanner(System.in);
      lim=sc.nextInt();
      for(i=1;i<=lim;i++)
      {
            sum=sum+i;
      }
      System.out.println("The Sum Is: "+sum);
    }
}