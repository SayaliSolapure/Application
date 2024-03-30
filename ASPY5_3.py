class Arithmetic:

    def __init__(self, A, B):
        self.No1 = A
        self.No2 = B

    def Addition(self):
        return self.No1 + self.No2

    def Substraction(self):
        return self.No1 - self.No2

    def Multiplication(self):
        return self.No1 * self.No2

    def Division(self):
        return self.No1 / self.No2


def main():
    print("Enter the first number : ")
    Value1 = int(input())

    print("Enter the second number : ")
    Value2 = int(input())

    obj = Arithmetic(Value1, Value2)

    Ans = obj.Addition()
    print("Addition is : ", Ans)

    Ans = obj.Substraction()
    print("Substraction is : ", Ans)

    Ans = obj.Multiplication()
    print("Multiplication is : ", Ans)

    Ans = obj.Division()
    print("Division is : ", Ans)

if __name__ == "__main__":
    main()