def CountDigit(no):
    Count = 0
    while no != 0:
        no //= 10
        Count = Count + 1
    return Count

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = CountDigit(Value)

    print("Number of digits are : ", Ans)

if __name__ == "__main__":
    main()