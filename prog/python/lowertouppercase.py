s=input("Enter a String:")
result=""
for i in range(0,len(s)):
    ascii_val = ord(s[i])
    if(ascii_val>96 and ascii_val<123):
        result+=chr(ascii_val-32)
    else:
        result+=chr(ascii_val)
s=result
print(s)
