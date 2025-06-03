l=list(map(int,input("Enter numbers:").split(" ")))
for i in range(0,len(l)-1):
    max1=l[i+1]
    for j in range(i+2,len(l)):
        if(l[j]>max1):
            ind=j
            max1=l[j]
    l[i]=l[ind]

print(l)
