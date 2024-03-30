def Fact(No):
    iCnt = 0
    iFact = 1

    iCnt = 1
    while(iCnt <= No):
        iFact = iFact * iCnt
        iCnt = iCnt + 1
    return iFact


def main():
    print("Enter number : ")
    Value = int(input())

    Ans = Fact(Value)

    print("Factorial is : ", Ans)

if __name__ == "__main__":
    main()