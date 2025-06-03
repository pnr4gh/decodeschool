num1=int(input("Enter first Number:"))
op=input("Enter Operation:")
num2=int(input("Enter Second Number:"))
if op=='+':
    result=num1+num2
elif op=='-':
    result=num1-num2
elif op=='*':
    result=num1*num2
elif op=='/':
    result=num1/num2
elif op=='%':
    result=num1%num2
else:
    result="invalid operation"
print(result)
