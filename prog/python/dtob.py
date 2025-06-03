binary_num,base=0,1
decimal_num=int(input("Enter a Decimal number:"))
while (decimal_num > 0):
    remainder = decimal_num % 2
    binary_num = binary_num + remainder * base
    decimal_num = decimal_num // 2
    base = base * 10
print(binary_num)
