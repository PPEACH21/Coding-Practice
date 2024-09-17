from math import pow

def perimeter(x,y,z):
    return float(x)*pow((1+float(y)),float(z))


x=input("Enter an intitial investment: ")
y=input("Enter an interest rate: ")
z=input("Enter a number of years: ")

print("The principal_year_N = {:.2f}".format(float(perimeter(x,y,z))))
