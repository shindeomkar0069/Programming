def CheckVowel(ch):
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or \
       ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U':
        return True
    else:
        return False

def main():
    ch = input("Enter a character: ")

    Ret = CheckVowel(ch)

    if Ret:
        print(ch, "is a Vowel")
    else:
        print("it is not Vowel")

if __name__ == "__main__":
    main()