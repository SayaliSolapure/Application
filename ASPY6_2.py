class BankAccount:
    ROI = 10.5
    def __init__(self, A, B):
        self.name = A
        self.amount = B

    def Display(self):
        print("Name is : ", self.name)
        print("Amount is : ", self.amount)

    def Deposit(self,value):
        self.amount = self.amount + value
        return self.amount

    def Withdraw(self,value):
        self.amount = self.amount - value
        return self.amount

    def CalculateInterest(self,value,time):
        S_I = (self.amount * time * BankAccount.ROI) / 100
        return S_I

def main():
    obj1 = BankAccount("sayali", 10000)

    obj1.Display()

    Ans = obj1.Deposit(5000)
    print("Deposit is : ", Ans)

    Ans = obj1.Withdraw(1500)
    print("Withdraw is : ", Ans)

    Ans = obj1.CalculateInterest(2,20)
    print("Simple interest is : ", Ans)

if __name__ == "__main__":
    main()