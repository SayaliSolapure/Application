def Fact(no):
    num = 1
    while no > 0:
        num = num * no
        no = no - 1
    return num

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = Fact(Value)

    print("Factorial is : ", Ans)

if __name__ == "__main__":
    main()