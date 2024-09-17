def fac(x):
    x=int(x)
    if(x==1):
        return 1
    else:
        return x*fac(x-1)


num=input("Enter the number: ")
print(str(num)+"! = "+str(fac(num)))
