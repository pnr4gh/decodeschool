import java.util.*;
class Ascii
{
 
    public static void main(String args[])
    {
       char ch;
       int ascii;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter The Character:");
       ch=sc.next().charAt(0);
       ascii=(int)ch;
       System.out.println("Equivalent Ascii Value:"+ascii);
    }

}

