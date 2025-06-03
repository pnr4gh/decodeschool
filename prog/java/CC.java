//Count The Occurences Of Given Character In A String ...

import java.util.*;

class Program
{
 public static void main(String args[])
 {
 String word;
 char ch;
  
 Scanner sc=new Scanner(System.in);

 System.out.println("Enter The Word:");  
 word=sc.nextLine();  

 int len1=word.length();
 int i,count=0;

 System.out.println("Enter The Character:");
 ch=sc.next().charAt(0); 
 
 System.out.println("The Occurences Of Character Is:");
 for(i=0;i<len1;i++)
 {
 if(ch==word.charAt(i))
 {
 count++;
 }

 }
 System.out.println(" "+count);

 }
}