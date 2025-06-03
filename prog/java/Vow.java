import java.util.*;

class Program
{
  public static void main(String args[])
  {
     String word;
     int i,count=0;

    Scanner sc=new Scanner(System.in);

    System.out.println("Enter The Word:");
    word=sc.next();

    int len=word.length();
    for(i=0;i<len;i++)
     {
             if(word.charAt(i)=='a' || word.charAt(i)=='e' || word.charAt(i)=='i' || word.charAt(i)=='o' || word.charAt(i)=='u')
                   {
                                   count++;
                   }
      }

    System.out.println("The Occurences Is:"+count);
  }
}