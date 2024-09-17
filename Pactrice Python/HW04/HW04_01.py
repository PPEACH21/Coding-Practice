x,y,z=map(int,input("Enter three integer number : ").split())

max=0

if int(x)>int(y):
    max=x
else:
    max=y
    
print("The maximum number is "+str(max))