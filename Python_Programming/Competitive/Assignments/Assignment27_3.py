class Numbers:
    def __init__(self):
        self.Value = int(input("Enter a number: "))

    def ChkPrime(self):
        if self.Value <= 1:
            return False

        for i in range(2, self.Value):
            if self.Value % i == 0:
                return False

        return True

    def ChkPerfect(self):
        total = 0

        for i in range(1, self.Value):
            if self.Value % i == 0:
                total += i

        return total == self.Value

    def Factors(self):
        print("Factors are:")
        for i in range(1, self.Value + 1):
            if self.Value % i == 0:
                print(i)

    def SumFactors(self):
        total = 0
        for i in range(1, self.Value + 1):
            if self.Value % i == 0:
                total += i
        return total


def main():
    Obj1 = Numbers()
    Obj2 = Numbers()

    print("Object 1")
    print("Prime :", Obj1.ChkPrime())
    print("Perfect :", Obj1.ChkPerfect())
    Obj1.Factors()
    print("Sum of Factors :", Obj1.SumFactors())

    print()

    print("Object 2")
    print("Prime :", Obj2.ChkPrime())
    print("Perfect :", Obj2.ChkPerfect())
    Obj2.Factors()
    print("Sum of Factors :", Obj2.SumFactors())


if __name__ == "__main__":
    main()