num=int(input("Enter a Number:"))
bit=int(input("Enter any bit position:"))
n=1<<(bit-1);
num=num^n
print("The value after {} bit is: {}".format(bit,num));
