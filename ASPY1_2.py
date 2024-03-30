def ChkNum(No):
    if (No % 2 == 0):
        print("Even number")
    else:
        print("Odd Number")

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = ChkNum(Value)

if __name__ == "__main__":
    main()