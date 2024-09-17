from math import sqrt
x=[]
y=[]

def area(x,y):
    A=float(sqrt((x[0]-x[1])**2+(y[0]-y[1])**2))
    B=float(sqrt((x[0]-x[2])**2+(y[0]-y[2])**2))
    C=float(sqrt((x[1]-x[2])**2+(y[1]-y[2])**2))
    
    S=float((A+B+C)/2)
    
    return sqrt(S*(S-A)*(S-B)*(S-C))

for i in range(3):
   print("Enter point "+str(i+1)+" (x"+str(i+1)+",y"+str(i+1)+")")
   x.append(float(input("x: ")))
   y.append(float(input("y: ")))
   
print("The area of a triangle = {:.2f}".format(float(area(x,y))))