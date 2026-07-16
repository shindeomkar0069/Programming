def PerfectNo():

    num = int(input("Enter a number: "))

    sum = 0

    for i in range(1, num // 2 + 1):
        if num % i == 0:
            sum = sum + i

    if sum == num:
            print(num, "is a Perfect Number.")
    else:
            print(num, "is Not a Perfect Number.")

def main():
    PerfectNo()

if __name__=="__main__":
    main()