num1,num2,num3=map(int,input("Enter three numbers:").split(" "))
if(num1<num2 and num1<num3):
    print("{} is smallest".format(num1))
elif (num2<num3):
    print("{} is smallest".format(num2))
else:
    print("{} is smallest".format(num3))
