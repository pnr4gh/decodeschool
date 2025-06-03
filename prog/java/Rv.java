//Remove The Vowels In Given String ...

import java.util.*;

class Program
{
 public static void main(String args[])
  {
     String word,nwrd=" ";
     char ch;
  
     Scanner sc=new Scanner(System.in);

     System.out.println("Enter The Word:");  
     word=sc.nextLine();  

     int len1=word.length();
     int i;
 
     word=word.toLowerCase();
      System.out.println("The Lower Case Is:"+word);

      System.out.println("The Output Is:");
      for(i=0;i<len1;i++)
       {
           if(word.charAt(i)!='a'&& word.charAt(i)!='e' && word.charAt(i)!='i' && word.charAt(i)!='o' && word.charAt(i)!='u')
             {
                       nwrd=nwrd+word.charAt(i);
              }

        }
       System.out.println(" "+nwrd);
   }
}