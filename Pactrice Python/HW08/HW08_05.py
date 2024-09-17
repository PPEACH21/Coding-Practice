x=[]
run=True
while(run):
    num=int(input("Enter a number (-1 to exit) : "))
    if(num==-1):
        C=input("\nEnter the number to search: ")
        if(int(C) in x):
            print("\n"+C+" is found in "+str(x)+" at index "+str(x.index(int(C))))
        else:
            print("\nSorry, "+C+" is not in "+str(x)+".")
    else:
        x.append(num)