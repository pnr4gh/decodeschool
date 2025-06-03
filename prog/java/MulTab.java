import java.util.*;
class MulTab
 {
     public static void main(String args[])
     {
          int ans=0,i,table,numberoftimes;
          System.out.println("Enter The Number Of Times And Table value");
          Scanner sc=new Scanner(System.in);
          table=sc.nextInt();
          numberoftimes=sc.nextInt();
          for(i=1;i<=numberoftimes;i++)
            {
			ans+=table;
            }
		System.out.println(ans);
      }
}