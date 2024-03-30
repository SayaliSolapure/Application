from functools import reduce

Greater = lambda No1 : ((No1 >= 70) and (No1 <= 90))

Increase = lambda No1 : No1 + 10

Product = lambda A, B : A * B

def main():
    print("Enter the number of element that you want to enter : ")
    iSize = int(input())

    List = []
    print("Please enter the data : ")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        List.append(Value)

    print("Data is : ", List)

    Data_Filter = list(filter(Greater,List))

    print("Data after filter is : ", Data_Filter)

    Data_Map = list(map(Increase,Data_Filter))

    print("Data after map is : ", Data_Map)

    Result = reduce(Product,Data_Map)

    print("Result after reduce is : ", Result)

if __name__ == "__main__":
    main()