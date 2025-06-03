l=list(map(int,input("Enter array elements:").split(" ")))
e=int(input("Enter the element to find:"))
for i in range(0,len(l)):
    if(l[i]==e):
        print(i)
        break
else:
    print("Element not found")
    
