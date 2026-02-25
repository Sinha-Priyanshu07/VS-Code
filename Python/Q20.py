#Q = Calcute The Power OF number
import math
num = int(input("Enter the Number : "))
pw = int(input("Enter the Power : "))

print("Trying By First Method")
print("So, The Answer of ", num,"To the Power of", pw,"=", int(math.pow(num,pw)))

print("\nTrying By Second Method")
print("So, The Answer of ", num,"To the Power of", pw,"=", num ** pw)