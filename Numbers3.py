class Numbers:
    def __init__(self):
        self.Size = 0
        self.Arr = list()

    def Accept(self):
        print("Enter how many elements you want : ")
        self.Size = int(input())

        print("Please enter the elements : ")
        Value = 0
        for i in range(0,self.Size):
            Value = int(input())
            self.Arr.append(Value)

    def Display(self):
        print("Elements of list are : ")
        for i in range(0,self.Size):
            print(self.Arr[i])
    
    def Summation(self):
        Sum = 0
        for i in range(0,self.Size):
            Sum = Sum + self.Arr[i]

        return Sum

    def Average(self):
        Sum = 0
        for i in range(0,self.Size):
            Sum = Sum + self.Arr[i]

        return(Sum/self.Size)

def main():
    obj = Numbers()
    obj.Accept()
    obj.Display()

    Output = obj.Summation()
    print("Summation of all elements is : ",Output)

    Output = obj.Average()
    print("Average of all elements is : ",Output)

if __name__ == "__main__":
    main()