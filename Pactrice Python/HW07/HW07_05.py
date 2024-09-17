sum=0
x = []
for i in range(5):
    y=(input("Enter an integer :"))
    x.append(int(y))
    sum=sum+int(y)

ave=int(sum)/5

print("\nThe average of "+str(x)+" is {:.2f}".format(float(ave)))
     