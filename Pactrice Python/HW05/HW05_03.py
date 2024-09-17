def fac(x):
    if(int(x)==1):
        return 1
    else:
        return x*(fac(x-1))

num=int(input("Enter a number (n): "))
ans=fac(num)
print(str(num)+"! is "+str(ans)+".")
