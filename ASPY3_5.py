from MarvellousNum import ChkPrime, AddPrime

def main():
    print("Enter the number of elements : ")
    Size = int(input())

    Arr = []
    print("Enter the values : ")

    for i in range(0, Size):
        Num = int(input())
        Arr.append(Num)

    print(Arr)

    Result = AddPrime(Num)

    print("Addition of prime number is : ", Result)

    Ans = ChkPrime(Num)

    print("Prime numbers is : ", Ans)

if __name__ == "__main__":
    main()