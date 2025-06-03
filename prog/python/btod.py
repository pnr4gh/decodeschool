decimal_val,base=0,1
binary_val=int(input("Enter a Binary number"))
while (binary_val > 0):
    rem = binary_val % 10
    decimal_val = decimal_val + rem * base
    binary_val = binary_val // 10 
    base = base * 2
print(decimal_val)
    
