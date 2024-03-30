def Pattern(Row):
    for i in range(Row):
        print("*", end = " ")

def main():
    print("Enter the rows : ")
    Value = int(input())

    Pattern(Value)

if __name__ == "__main__":
    main()