num = int(input("Enter a number: "))

binary = ""

while num > 0:
    rem = num % 2
    binary = str(rem) + binary
    num = num // 2

print("Binary equivalent is:", binary)