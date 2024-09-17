
def area_rec(w,h):
    return float(float(w)*float(h))

x=input("Enter width: ")
y=input("Enter height: ")

print("The area of rectangle = {:.1f}".format(float(area_rec(x,y))))