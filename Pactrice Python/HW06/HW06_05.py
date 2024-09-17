x=int(input("Enter an integer number : "))

for i in range(x):
    for j in range(x):
        if(int(j)%2==1 and int(i)%2==1):
            print("X ",end="")
        elif(int(j)%2==1 and int(i)%2==0):
            print("O ",end="")
        elif(int(j)%2==0 and int(i)%2==0):
            print("X ",end="")
        elif(int(j)%2==0 and int(i)%2==1):
            print("O ",end="")
    print("")
print(">>>")