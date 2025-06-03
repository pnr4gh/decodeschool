l=list(map(int,input("Enter Numbers:").split()))
start=0
stop=len(l)//2 -1
while(start<stop):
    l[start],l[stop]=l[stop],l[start]
    start+=1
    stop-=1
print(l)

