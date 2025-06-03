//To Print All The English Alphabets In Lower Case...

import java.util.*;

class Program
{
  public static void main(String args[])
   {
      int i;
      char ascii;
      Scanner sc=new Scanner(System.in);

     System.out.println("The Alphabets In Lower Case:");
     for(i=97;i<=122;i++)
       {
           ascii=(char)i;
           System.out.println(" "+ascii);
      }

  }
}