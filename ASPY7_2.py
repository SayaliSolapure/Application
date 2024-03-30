import threading

def EvenFactor(No):
    int = 0
    for i in range(1,No):
        if(No % i == 0 and i % 2 == 0):
            int = int + i
    print("Even factors are : ", int)

def OddFactor(No):
    int = 0
    for i in range(1,No):
        if(No % i == 0 and i % 2 != 0):
            int = int + i
    print("Odd factors are : ", int)

def main():
    print("Demonstration of Parallel programming using multiple threads")

    No = int(input("Enter number : "))

    t1 = threading.Thread(target = EvenFactor, args = (No,))
    t2 = threading.Thread(target = OddFactor, args = (No,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Exit from main.")

if __name__ == "__main__":
    main()