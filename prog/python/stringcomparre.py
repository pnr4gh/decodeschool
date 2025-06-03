s1=input("Enter first String:")
s2=input("Enter first String:")
if(len(s1)==len(s2)):
    for i in range(0,len(s1)):
        if(s1[i]!=s2[i]):
            print("Not Equal")
            break
    else:
        print("equal")
else:
    print("Not Equal")
    
        
    
      
