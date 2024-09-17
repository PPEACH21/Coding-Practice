from math import sqrt

def check(x):
    i=int(2)
    if(int(x)<2):
        return False
    else:
        while(sqrt(x)>=i):
            if(int(x) % i ==0):
                return False
            else:
                i=i+1
    return True

num=int(input("Enter an integer: "))
ans = bool(check(num))

if(ans==True):
    print(str(num)+" is a prime number")
else:
    print(str(num)+" is not a prime number")