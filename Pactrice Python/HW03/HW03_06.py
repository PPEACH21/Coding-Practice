x,y= map(int, input("Enter the two integer numbers separated by space: ").split())

print("The division is : {:.2f}".format(float(x/y)))
print("The floor division : {:.0f}".format(float(x/y)))
print("The modulus : {:.0f}".format(float(x%y)))