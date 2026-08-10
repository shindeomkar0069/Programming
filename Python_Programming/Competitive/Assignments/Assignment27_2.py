class BankAccount:
    ROI = 10.5          # Class variable

    def __init__(self, Name, Amount):
        self.Name = Name
        self.Amount = Amount

    def Display(self):
        print("Account Holder :", self.Name)
        print("Balance :", self.Amount)

    def Deposit(self):
        value = float(input("Enter deposit amount: "))
        self.Amount += value
        print("Amount deposited successfully")

    def Withdraw(self):
        value = float(input("Enter withdrawal amount: "))
        if value <= self.Amount:
            self.Amount -= value
            print("Withdrawal successful")
        else:
            print("Insufficient balance")

    def CalculateInterest(self):
        interest = (self.Amount * BankAccount.ROI) / 100
        return interest


def main():
    Obj1 = BankAccount("Omkar", 10000)
    Obj2 = BankAccount("Amit", 5000)

    print("Object 1")
    Obj1.Display()
    Obj1.Deposit()
    Obj1.Withdraw()
    Obj1.Display()
    print("Interest :", Obj1.CalculateInterest())

    print()

    print("Object 2")
    Obj2.Display()
    Obj2.Deposit()
    Obj2.Withdraw()
    Obj2.Display()
    print("Interest :", Obj2.CalculateInterest())


if __name__ == "__main__":
    main()