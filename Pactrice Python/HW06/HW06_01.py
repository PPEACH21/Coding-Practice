run = True
while(run):
    x=int(input("Please enter a number (-1 to exit): "))
    
    if(x==-1):
        print("Good Bye! I")
        print("will miss you.")
        break
    else:
        for i in range(12):
            i=i+1
            print(str(x)+"*"+str(i)+" = "+str(x*i))