l1=list(map(int,input("Enter Numbers:").split()))
l2=list(map(int,input("Enter Numbers:").split()))
l3=[None]* (len(l1)+len(l2))
k=0
for i in range(0,len(l1)):
    l3[k]=l1[i]
    k+=1

for i in range(0,len(l2)):
    l3[k]=l2[i]
    k+=1

print(l3)
