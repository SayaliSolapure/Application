def AddDigit(no):
    Sum = 0
    while no != 0:
        Sum = Sum + no % 10
        no = no // 10
    return Sum

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = AddDigit(Value)

    print("Addition of digits are : ", Ans)

if __name__ == "__main__":
    main()