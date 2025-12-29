print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

e = int(input("Enter your first number: "))
f = int(input("Enter your second number: "))

o = int(input("Choose operation (1/2/3/4): "))

if o == 1:
     print("Result:", e + f)
elif o == 2:
     print("Result:", e - f)
elif o == 3:
     print("Result:", e * f)
elif o == 4:
     if f != 0:
         print("Result:", e / f)
     else:
         print("Cannot divide by zero")
else:
     print("Wrong input")
