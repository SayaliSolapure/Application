def Display(no):
    i = no
    while(i > 0):
        print(i, end = " ")
        i = i - 1

def main():
    print("Enter number : ")
    Value = int(input())

    Display(Value)

if __name__ == "__main__":
    main()