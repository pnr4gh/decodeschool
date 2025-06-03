s=input("Enter a String:")
c=input("Enter a Character:")

for i in range(0,len(s)):
    if(s[i]==c):
        print(i)
        break
else:
    print("Not Found")
