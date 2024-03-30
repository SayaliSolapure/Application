def ChkNum(x):
    if (x > 0):
        print("Positive number")

    if (x < 0):
        print("Negative number")

    if (x == 0):
        print("Zero")

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = ChkNum(Value)

if __name__ == "__main__":
    main()