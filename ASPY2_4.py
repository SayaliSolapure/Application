def FactSum(no):
    iCnt = 1
    Sum = 0
    while no > iCnt:
        if no % iCnt == 0:
            Sum = Sum + iCnt
        iCnt = iCnt + 1
    return Sum

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = FactSum(Value)

    print("Addition of factors is : ",Ans)

if __name__ == "__main__":
    main()