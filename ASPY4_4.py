from functools import reduce

ChkEven = lambda No : (No % 2 == 0)

Square = lambda No : No**2

Sum = lambda A, B : A+B

def main():
    print("Enter number of elements you want to enter : ")
    iSize = int(input())

    List = []
    print("Please enter the data : ")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        List.append(Value)

    print("Data is : ", List)

    Data_Filter = list(filter(ChkEven,List))

    print("Data after filter is : ", Data_Filter)

    Data_Map = list(map(Square,Data_Filter))

    print("Data after map is : ", Data_Map)

    Output = reduce(Sum,Data_Map)

    print("Result after reduce is : ", Output)

if __name__ == "__main__":
    main()