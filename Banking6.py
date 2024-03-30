class Bank_Account:
    Bank_Name = "HDFC bank PVT LTD"
    ROI_On_FD = 6.7

    def __init__(self):
        self.Name = ""
        self.Amount = 0
        self.Address = ""
        self.AccountNo = 0

    def CreateAccount(self):
        print("Enter your name : ")
        self.Name = input()

        print("Enter your initial amount : ")
        self.Amount = int(input())

        print("Enter your Address : ")
        self.Address = input()

        print("Enter your Account Number : ")
        self.AccountNo = int(input())

    def DisplayAccountInfo(self):
        print("____Your Account Information is as below____")
        print("Name of Account Holder : ",self.Name)
        print("Account Number : ",self.AccountNo)
        print("Address of Account Holder : ",self.Address)
        print("Current Amount in account : ",self.Amount)

    @classmethod
    def DisplayBankInformation(cls):
        print("Welcome to banking console")
        print("Name of our bank is : ",cls.Bank_Name)
        print("Rate of interest we offer on fixed deposite is : ",cls.ROI_On_FD)

    @staticmethod
    def DisplayKYCInfo():
        print("Please consider below KYC information")
        print("According to the rules of Government of India you have to submit below documents")
        print("1 : Clear and recent passport size photo")
        print("2 : Photo of aadhar card")
        print("3 : Photo of PAN card")

    def Deposite(self,value):
        self.Amount = self.Amount + value

    def Withdraw(self,value):
        self.Amount = self.Amount - value

def main():
    print("______________________________")
    print("____Banking Application____")
    print("______________________________")
    print("____Calling static method to display KYC info____")
    Bank_Account.DisplayKYCInfo()

    print("______________________________")
    print("____Accessing the class variables from main____")
    print("______________________________")
    print("Name of bank : ", Bank_Account.Bank_Name)
    print("Rate of Interest on fixed deposite : ", Bank_Account.ROI_On_FD)

    print("______________________________")
    print("____Calling the class method to display Bank information____")
    print("______________________________")
    Bank_Account.DisplayBankInformation()
    print("______________________________")
    print("____Creating the objects of class____")
    print("______________________________")
    User1 = Bank_Account()
    User2 = Bank_Account()

    print("______________________________")
    print("____Creating the first account____")
    print("______________________________")

    print("______________________________")
    print("____Enter details for first account holder____")
    print("______________________________")
    User1.CreateAccount()

    print("______________________________")
    print("____Creating the second account____")
    print("______________________________")

    print("______________________________")
    print("____Enter details for second account holder____")
    print("______________________________")
    User2.CreateAccount()

    print("____Calling instance method to display information of first account____")
    User1.DisplayAccountInfo()
    print("____Calling instance method to display information of second account____")
    User2.DisplayAccountInfo()

    print("____Depositing 500 in User1____")
    User1.Deposite(500)
    print("____Depositing 1200 in User2____")
    User2.Deposite(1200)

    print("Amount of {} after deposite is {} : ".format(User1.Name,User1.Amount))
    print("Amount of {} after deposite is {} : ".format(User2.Name,User2.Amount))

    print("____Withdraw 200 in User1____")
    User1.Withdraw(200)

    print("____Withdraw 3000 in User2____")
    User2.Withdraw(3000)

    print("Amount of {} after withdraw is {} : ".format(User1.Name,User1.Amount))
    print("Amount of {} after withdraw is {} : ".format(User2.Name,User2.Amount))

    print("______________________________")
    print("____End of banking application____")
    print("______________________________")

if __name__ == "__main__":
    main()