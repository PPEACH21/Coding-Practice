def bodyMassIndex(kg,m):
    kg=float(kg)
    m=float(m)
    return kg/(m*m)

x=input("Enter weight (kg): ")
y=input("Enter height (m): ")

print("The BMI = {:.2f}".format((bodyMassIndex(x,y))))