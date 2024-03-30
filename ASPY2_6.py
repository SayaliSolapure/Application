def Pattern(Row,Col):
    for i in range(Row):
        j = i + 1
        while j <= 5:
            print("*",end = " ")
            j = j + 1

        print("\n")

def main():
    print("Enter the row number : ")
    Value1 = int(input())

    print("Enter the column number : ")
    Value2 = int(input())

    Pattern(Value1, Value2)

if __name__ == "__main__":
    main()