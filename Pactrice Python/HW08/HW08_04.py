x=[]
sum=0
run=True

while(run):
    num=float(input("Enter a number (-1 to exit) : "))
    
    if(num == -1):
        print("The summation of "+str(x)+" is {:.2f}.".format(float(sum)))
        break
    else:
        sum+=num
        x.append(num)