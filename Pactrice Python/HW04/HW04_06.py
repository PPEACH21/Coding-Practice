max=None
min=None
for i in range(5):
    x= int(input("Input"+str(i+1)+"#:"))
    
    if(i==0):
        max=min=x
    if(int(max)<x):
        max=x
    if(int(min)>x):
        min=x
        
print("Maximum: "+str(max))
print("Minimum: "+str(min))