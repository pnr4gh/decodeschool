l=list(map(int,input("Enter Numbers:").split()))
min1=float('inf')
min2=float('inf')
for i in l:
    if(i<min1):
        min2=min1
        min1=i
    elif(i<min2):
        min2=i
print(min2)

