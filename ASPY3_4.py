def CountElement(List, Element):
    Count = 0
    for no in List:
        if (no == Element):
            Count = Count + 1
    return Count

def main():
    Array = [13, 5, 45, 7, 4, 56, 5, 34, 2, 5, 65]

    print("Number of elements : ",len(Array))

    print("Enter element : ")
    Value = int(input())

    Ans = CountElement(Array, Value)

    print("Element count is : ", Ans)

if __name__ == "__main__":
    main()