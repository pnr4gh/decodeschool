l=list(map(int,input("Enter array elements:").split(" ")))
e=int(input("Enter a number:"))
for i in range(0,len(l)):
    if(l[i]<e):
        print(l[i],end=" ")
        
