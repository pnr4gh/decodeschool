l=list(map(int,input("Enter Numbers:").split()))
max1=float('-inf')
max2=float('-inf')
for i in l:
    if(i>max1):
        max2=max1
        max1=i
    elif(i>max2):
        max2=i
print(max2)

