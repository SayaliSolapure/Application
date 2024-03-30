def Display(no):

    if no >= 1:
        print(no, end = " ")
        no = no - 1
        Display(no)

def main():
    print("Enter number : ")
    No = int(input())

    Display(No)

if __name__ == "__main__":
    main()