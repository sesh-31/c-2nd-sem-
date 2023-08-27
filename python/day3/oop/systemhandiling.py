
age=int(input("Enter the age: "))
try:
   xfactor = 10/age
   print(xfactor)
except:
    print("Error")
else:
    print(xfactor)
finally:
    print("finally done")