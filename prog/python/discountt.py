noi=int(input("Enter the no of Items:"))
price=float(input("Enter the price:"))
amount=noi * price
discount=0
if(amount>=5000 and amount<10000):
    discount=amount*0.05
elif(amount>=10000):
    discount=amount*0.1

amount=amount-discount

print("Bill Amount: {}".format(amount))

