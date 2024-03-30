def EvenNum(no):
    i = j = 1
    while(j <= no):
        if(i % 2 == 0):
            print(i,end = " ")
            j = j + 1
        i = i + 1

def main():
    print("Enter number : ")
    Value = int(input())

    EvenNum(Value)

if __name__ == "__main__":
    main()