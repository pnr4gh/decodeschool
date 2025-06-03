import java.util.*;
class KiloToByt
{
   public static void main(String args[])
   {
       int kilobytes,bytes;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter The KiloBytes:");
       kilobytes=sc.nextInt();
       bytes=kilobytes*1024;
       System.out.println("The Bytes Is:"+bytes);
   }
}