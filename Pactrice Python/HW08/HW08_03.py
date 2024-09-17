x=[]
max=None
for i in range (5):
    num=int(input("Enter number#"+str(i+1)+": "))
    x.append(num)
    
    if(int(i)==0):
        max=num
    if(num>max):
        max=num

max_index = x.index(int(max))
print("The maximum value is "+str(max)+" at index "+str(max_index))