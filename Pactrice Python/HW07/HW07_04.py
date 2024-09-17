from math import sqrt

def check(n):
    n=int(n)
    i=int(2)
    if(n<2):
        return False
    else:
        while(sqrt(n)>=i):
            if(n%i==0):
                return False
            else:
                i=i+1
    return True

x=input("Enter an integer number: ")

if(check(x)):
    print(str(x)+" is a prime number.")
else:
    print(str(x)+" is not a prime number.")