def CheckPrime(num):
    a = 2
    b = 0
    while a < num:
        if num % a == 0:
            c = 1
        a = a + 1
    return b

def main():
    print("Enter number : ")
    Value = int(input())

    Ans = CheckPrime(Value)

    if Ans == 1:
        print("It is not prime number")
    else:
        print("It is prime number")

if __name__ == "__main__":
    main()