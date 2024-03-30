def SumDigit(No):
    Sum = 0
    Digit = 0
    while(No != 0):
        Digit = No % 10
        Sum = Sum + Digit
        No = No // 10
    return Sum

def main():
    print("Enter the number : ")
    Value = int(input())

    Ans = SumDigit(Value)

    print("Addition of digit is : ", Ans)

if __name__ == "__main__":
    main()