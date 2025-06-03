import java.util.*;
class MulTab
 {
     public static void main(String args[])
     {
          int i,table,numberoftimes;
          System.out.println("Enter The Number Of Times And Table value");
          Scanner sc=new Scanner(System.in);
          table=sc.nextInt();
          for(i=1;i<=10;i++)
            {
                 System.out.println(i+"x"+table+"="+i*table);
            }
      }
}