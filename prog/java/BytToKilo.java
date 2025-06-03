import java.util.*;
class Converter
{
   public static void main(String args[])
   {
       Double kilobytes,bytes;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter The Bytes:");
       bytes=sc.nextDouble();
       kilobytes=bytes/1024;
       System.out.println("The KiloBytes Is:"+kilobytes);
   }
}