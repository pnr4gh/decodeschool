s1=input("Enter a String:")
s2=input("Enter Substring:")
count=0
for i in range(0,len(s1)-len(s2)+1):
    j=0
    b=0
    if(s1[i]==s2[j]):
        k=i
        while(j<len(s2)):
            if(s1[k]!=s2[j]):
                b=1
                break
            j=j+1
            k=k+1
        if(b==0):
            print("The Sub string is at {}".format(i))
            break
else:
    print("Sub String Not found")

            
            
				
