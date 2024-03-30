def Mult(No1, No2):
    return (No1 * No2)

MultAns = lambda No1, No2 : No1 * No2

def main():
    print("Enter the first value : ")
    Value1 = int(input())

    print("Enter the second value : ")
    Value2 = int(input())

    Result = MultAns(Value1, Value2)

    print("Ans is : ", Result)

if __name__ == "__main__":
    main()