num=int(input("Enter a number:"))
bit=int(input("Enter binary position:"))
num=num>>(bit-1)
if((num&1)!=0):
    print("{} is set".format(bit))
else:
    print("{} is reset".format(bit))
	
