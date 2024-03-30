def ChkPrime(Num):
    for j in range(2,Num):
        if Num % j == 0:
            return False
    else:
        return True

MultPrime = lambda Num : Num * 2

MaxNum = lambda A, B : A if A > B else B

def reduceX(Helper_Function, Data):
    Ans = 0
    for Num in Data:
        Ans = Helper_Function(Ans, Num)
    return Ans

def filterX(Helper_Function, Data):
    Result = []
    for Num in Data:
        if(Helper_Function(Num) == True):
            Result.append(Num)
    return Result

def mapX(Helper_Function, Data):
    Result = []
    for Num in Data:
        Value = Helper_Function(Num)
        Result.append(Value)
    return Result

def main():
    print("Enter number of element you want to enter : ")
    iSize = int(input())

    Data_Input = []
    print("Please enter the data : ")
    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is : ", Data_Input)

    Data_Filter = filterX(ChkPrime, Data_Input)

    print("Data after filter is : ", Data_Filter)

    Data_Map = mapX(MultPrime, Data_Filter)

    print("Data after map is : ", Data_Map)

    Output = reduceX(MaxNum, Data_Map)

    print("Result after reduce is : ", Output)

if __name__ == "__main__":
    main()