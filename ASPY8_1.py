def Pattern(No):
    for i in range(No):
        print("*", end = " ")

def main():
    print("Enter number : ")
    Value = int(input())

    Pattern(Value)

if __name__ == "__main__":
    main()