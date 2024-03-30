def Add(A,B):
    Sum = A + B
    return Sum

def main():
    print("Enter the first number : ")
    Value1 = int(input())

    print("Enter the second number : ")
    Value2 = int(input())

    Ans = Add(Value1, Value2)

    print("Addition is : ", Ans)

if __name__ == "__main__":
    main()