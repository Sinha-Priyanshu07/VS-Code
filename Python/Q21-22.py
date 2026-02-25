#Q = Swap two Numbers
#With Third Variable
print("Using First Method : With third variable")
first = float(input("Enter Your 1st Number : "))
second = float(input("Enter Your 2nd Number : "))

print ("Before Swap 1st = ",first, ", 2nd = ", second)
third = first
first = second
second = third
print ("After Swap 1st = ",first, ", 2nd = ", second)



#Without Third Variable
print("Using Second Method : Without third variable")
x = float(input("Enter Your 1st Number : "))
y = float(input("Enter Your 2nd Number : "))


print ("Before Swap 1st = ",x, ", 2nd = ", y)
x = x + y
y = x - y
x = x - y
print("After Swap 1st = ", x,", 2nd = ",y)