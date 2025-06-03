//To Print The Character Of Given Ascii Value...

import java.util.*;

class Program
{
  public static void main(String args[])
  {
      int val;
     char ascii;
     Scanner sc=new Scanner(System.in);

     System.out.println("Enter The Value:");
     val=sc.nextInt();

     ascii=(char)val;

     System.out.println("The Output Is:"+ascii);
  }
}