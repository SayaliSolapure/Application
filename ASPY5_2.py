class Circle:
    def __init__(self, R, pi):
        self.Radius = R
        self.PI = pi

    def Area(self):
        return self.PI * self.Radius**2

    def Circumference(self):
        return self.PI * self.Radius*2

def main():
    print("Enter the radius : ")
    Radius = int(input())

    PI = 3.14

    obj = Circle(Radius, PI)

    Ans = obj.Area()
    print("Area is : ", Ans)

    Ans = obj.Circumference()
    print("Circumference is : ", Ans)

if __name__ == "__main__":
    main()