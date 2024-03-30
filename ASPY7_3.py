import threading

def EvenList(Num):
    Num = list(Num)
    sum = 0
    for i in range(len(Num)):
        if(Num[i] % 2 == 0):
            sum = sum + Num[i]
    print("Even list is : ", sum)

def OddList(Num):
    Num = list(Num)
    sum = 0
    for i in range(len(Num)):
        if(Num[i] % 2 != 0):
            sum = sum + Num[i]
    print("Odd list is : ", sum) 

def main():
    Num = [int(x) for x in input("Enter Numbers : ").split()]

    t1 = threading.Thread(target = EvenList, args = (Num,))
    t2 = threading.Thread(target = OddList, args = (Num,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

if __name__ == "__main__":
    main()