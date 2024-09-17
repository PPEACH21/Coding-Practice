x,y=map(int,input("Enter two integer number : ").split())

if(int(x)<int(y)):
    print("UP!")
elif(int(y)<int(x)):
    print("Down!")
else:
    print("Equal!")