import java.util.*;
class Discount
{
    public static void main(String args[])
    {
        double quantity,price,amount,discount;
 	Scanner sc=new Scanner(System.in);
	System.out.println("Enter The Price Of The Product:");
	price=sc.nextDouble();
        System.out.println("Enter The No Of Quantity:"); 
	quantity=sc.nextDouble();  
	amount=quantity*price;

	if(amount>5000)

	{

		discount=amount*0.05;

		amount=amount-discount;

	}
	
	System.out.println("The Total Amount is:"+amount);
	

   }
}
