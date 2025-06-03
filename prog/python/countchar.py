s=input("Enter a String:")
c=input("Enter a Character:")
count=0
for i in range(0,len(s)):
    if(s[i]==c):
        count+=1
print(count)
