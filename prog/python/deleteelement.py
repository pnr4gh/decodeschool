l=list(map(int,input("Enter Numbers:").split()))
e=int(input("Enter the element to delete"))
for i in range(0,len(l)):
    if(l[i]==e):
        for j in range(i,len(l)-1):
            l[j]=l[j+1]
        l[j+1]=None
print(l)
            
