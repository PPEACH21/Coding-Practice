x,y,z=map(str,input("Input three characters:> ").split())
x = [x, y, z]

vowels=0
constant=0
for i in range(3):
    if(x[i] in 'aeiouAEIOU'):
        vowels=vowels+1
    else:
        constant=constant+1

print("The number of constants is "+str(constant))
print("The number of vowels is "+str(vowels))