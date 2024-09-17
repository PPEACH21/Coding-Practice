run=True
x=[]
while(run):
    num=int(input("Enter a number (-1 to exit) : ")) 
    if(num==-1):
        print("\nThe number of input is "+str(len(x))+".")
        print("The numbers in reverse order are ",end="")
        for i in range(len(x)):
            print(str(x[len(x)-1-i])+" ",end="")
        break
    else:
        x.append(num)
       