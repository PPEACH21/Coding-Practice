x=input("x = ")
ans=0;

for i in range(len(x)):
    ans += int(x[i])
    
print("Sum of digit is ",ans)