from math import sqrt
x=[]
y=[]

def distant(x,y):
    return sqrt((x[0]-x[1])**2+(y[0]-y[1])**2)
for i in range(2):
    x.append(float(input("Enter x of point "+str(i+1)+": ")))
    y.append(float(input("Enter y of point "+str(i+1)+": ")))
    
print("Distance between ("+str(int(x[0]))+","+str(int(y[0]))+") and ("+str(int(x[1]))+","+str(int(y[1]))+") = {:.2f}".format(float(distant(x,y))))