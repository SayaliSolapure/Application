def Pattern(Row,Col):
    for i in range(Row):
        j = 1
        while j <= i + 1:
            print(j, end = " ")
            j = j + 1

        print("\n")

def main():
    print("Enter the rows : ")
    Value1 = int(input())

    print("Enter the columns : ")
    Value2 = int(input())

    Pattern(Value1, Value2)

if __name__ == "__main__":
    main()