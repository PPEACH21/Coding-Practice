print("[r] Rectangle")
print("[c] Circle")
print("[t] Triangle")
print("[x] Exit")

IP=3.1416

while(True):
    select=input("Select r/c/t/x: ")
    select=select.lower()
    match select:
        case 'r':
            x=float(input("Enter height: "))
            y=float(input("Enter width: "))
            ans = x*y
            print("Area of this rectangle is {:.2f}\n".format(ans))
        case 'c':
            x=float(input("Enter radius: "))
            ans = float(IP*x*x)
            print("Area of this circle is {:.2f}\n".format(ans))
        case 't':
            x=float(input("Enter height: "))
            y=float(input("Enter base: "))
            ans = float((1/2)*(x*y))
            print("Area of this triangle is {:.2f}\n".format(ans))
        case 'x':
            print("Bye!")
            break
        case _:
            print("Invaild command!\n")
 