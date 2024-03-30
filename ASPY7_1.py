import threading

def Even():
    for i in range(1,11):
        if(i % 2 == 0):
            print("Even number : ",i)

def Odd():
    for i in range(1,11):
        if(i % 2 != 0):
            print("Odd number : ",i)

def main():
    print("Demonstration of parallel programing using multiple threads")

    t1 = threading.Thread(target = Even, args = ())
    t2 = threading.Thread(target = Odd, args = ())

    t1.start()
    t2.start()

    t1.join()
    t2.join()

if __name__ == "__main__":
    main()