def CheckPalindrome(No):
    temp = No
    rev = 0

    while No > 0:
        digit = No % 10
        rev = rev * 10 + digit
        No = No // 10

    if temp == rev:
        return True
    else:
        return False

def main():
    No = int(input("Enter a number: "))

    Ret = CheckPalindrome(No)

    if Ret:
        print(No, "is a Palindrome")
    else:
        print(No, "is Not a Palindrome")

if __name__ == "__main__":
    main()