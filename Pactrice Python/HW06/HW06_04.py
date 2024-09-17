from math import sqrt

def check(n):
    i=int(2)
    if(n<2):
        return False
    else:
        while(sqrt(n)>=i):
            if(int(n)%i==0):
                return False
            else:
                i=i+1
    return True

ans = [] 
x,y = map(int,input("Enter two integer : ").split())
i=x+1
while(i<=y):
    if(check(i)):
        ans.append(i)
    i=i+1

if(len(ans)==1):
    print(str(ans[0])+" is the only one prime number between "+str(x)+" and "+str(y)+".")
elif(len(ans)==2):
    print("There are "+str(len(ans))+" prime number between "+str(x)+" and "+str(y)+".")
    print(str(ans[0])+" and "+str(ans[1])+" are prime numbers.")
elif(len(ans)>=2):
    print("There are "+str(len(ans))+" prime number between "+str(x)+" and "+str(y)+".")
    for p in range(len(ans)-1):
        print(str(ans[p])+",",end="")
    print("\b and "+str(ans[-1])+" are prime numbers.")
else:
    print("number between "+str(x)+" and "+str(y)+" not have prime number.")