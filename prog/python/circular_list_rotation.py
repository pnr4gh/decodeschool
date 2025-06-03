l=list(map(int,input("Enter numbers:").split(" ")))
r=int(input("Roatations?:"))
for i in range(0,r):
    temp=l[0]
    for j in range(0,len(l)-1):
        l[j]=l[j+1]
    l[len(l)-1]=temp
print(l)
        
    


