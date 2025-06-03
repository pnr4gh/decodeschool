//To Print All The English Alphabets In Upper Case...

import java.util.*;

class Program
{
  public static void main(String args[])
   {
      int i;
      char ascii;
      Scanner sc=new Scanner(System.in);

     System.out.println("The Alphabets In Upper Case:");
     for(i=65;i<=90;i++)
       {
           ascii=(char)i;
           System.out.println(" "+ascii);
      }

  }
}