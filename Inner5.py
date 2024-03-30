def Substraction(No1,No2):
    Ans = 0
    Ans = No1 - No2
    return Ans

def Decorated_Function(Function_Name):
    def Inner(A,B):
        if(A < B):
            A,B = B,A
        Output = Function_Name(A,B)
        return Output
    return Inner

def main():
    Value1 = int(input("Enter first number : "))
    Value2 = int(input("Enter second number : "))

    New_Function = Decorated_Function(Substraction)
    Ret = New_Function(Value1,Value2)
    print("Substraction is : ", Ret)

if __name__ == "__main__":
    main()