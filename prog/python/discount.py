noi=int(input("Enter the no of Items:"))
price=float(input("Enter the price:"))
amount=noi * price
if(amount>=5000):
    discount=amount*0.05
    amount=amount-discount
print("Bill Amount: {}".format(amount))

