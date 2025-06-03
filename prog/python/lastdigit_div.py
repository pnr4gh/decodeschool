num=int(input("Enter a number:"))
last_digit=num%10
if(last_digit%3==0):
    print("{} is divisible by 3 ".format(last_digit))
else:
    print("{} is not divisible by 3".format(last_digit))

