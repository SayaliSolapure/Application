import Arithmetics

def main():
    x = int(input("Enter the first number : "))
    y = int(input("Enter the second number : "))

    print("Addition is : ", Arithmetics.Add(x,y))
    print("Substraction is : ", Arithmetics.Sub(x,y))
    print("Multiplication is : ", Arithmetics.Mult(x,y))
    print("Division is : ", Arithmetics.Div(x,y))

if __name__ == "__main__":
    main()