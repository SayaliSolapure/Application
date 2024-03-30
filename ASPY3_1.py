def Add(List):
    Sum = 0
    for i in range(0, len(List)):
        Sum = Sum + List[i]

    print("Addition of list is : ", Sum)

def main():
    Data = [13, 5, 45, 7, 4, 56]

    print("Number of elements : ", len(Data))

    print(Data)

    Add(Data)

if __name__ == "__main__":
    main()