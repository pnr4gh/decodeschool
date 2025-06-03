import java.util.*;
class LessEle
{
  public static void main(String args[])
  {
     int size,i,num,j=0;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter Size Of Array:");
     size=sc.nextInt();
     int a[]=new int[size];
     System.out.println("Enter The Array Elements:");
     for(i=0;i<size;i++)
        {
            a[i]=sc.nextInt();

	}
     System.out.println("Enter The Number:");
     num=sc.nextInt();
     System.out.println("The Array Elements Less Than That Of Number Is:");     
     for(i=0;i<size;i++)
        {
            if(a[i]<num)
              {
			j++;
                System.out.print(" "+a[i]);
              }
        }
     if(j==0)
        {
           System.out.println("Zero.");
        }
                
  }
}



