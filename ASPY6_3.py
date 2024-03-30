class Number:
    def __init__(self, Value):
        self.value = Value

    def ChkPrime(self):
        no = self.value

        if(no <= 1):
            return False
        else:
            return True

        if(no % 2 == 0 or no % 3 == 0):
            return False

        i = 5
        while(i * i <= no):
            if(no % i == 0):
                return False
            i = i + 6
        return True

    def ChkPerfect(self):
        num = self.value
        sum1 = 0

        for i in range(1,num):
            if(num % i == 0):
                sum1 = sum1 + i
        if(sum1 == num):
            return True
        else:
            return False

    def SumFactors(self):
        n = self.value
        sum1 = 0

        for i in range(1,n):
            if(n % i == 0):
                sum1 = sum1 + i
        return sum1

    def Factors(self):
        x = self.value
        list = []

        for i in range(1,x+1):
            if(x % i == 0):
                list.append(i)
        return list

def main():
    list = []

    print("Enter the number : ")
    No = int(input())

    User1 = Number(No)

    print("Number is prime : ", User1.ChkPrime())
    print("Number is perfect : ", User1.ChkPerfect())
    print("Sum of factors of number is : ", User1.SumFactors())

    list = User1.Factors()

    print("Factors are : ",list)

if __name__ == "__main__":
    main()