def Digit(No):
    if (No % 5 == 0):
        print("True")
    else:
        print("False")

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = Digit(Value)

if __name__ == "__main__":
    main()