//To Calculate The Salary Of Employess...

import java.util.*;

class Program
{
  public static void main(String args[])
   {
       int wages,days;
       double basic,HRA,DA,PF,netsalary;

       Scanner sc=new Scanner(System.in);
	
       System.out.println("Enter The No.Of Days:");
       days=sc.nextInt();

      System.out.println("Enter The Wages:");
      wages=sc.nextInt();

      basic=wages*days;
      HRA=basic*0.1;
      DA=basic*0.05;
      PF=basic*0.12;  
      netsalary=basic+HRA+DA-PF;
	
      System.out.println("The Basic Pay Is:"+basic);
      System.out.println("The HRA Is:"+HRA);
      System.out.println("The DA Is:"+DA);
      System.out.println("The PF Is:"+PF);
      System.out.println("The NETSALARY Is:"+netsalary);

   }
} 