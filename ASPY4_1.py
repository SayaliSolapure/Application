def Power(No):
    if(No**2 == 0):
        return True
    else:
        return False

def PowerX(No):
    return (No**2)

Ans = lambda No : No**2

def main():
    print("Enter the value : ")
    Value = int(input())

    Result = Ans(Value)

    print("Ans is : ", Result)

if __name__ == "__main__":
    main()