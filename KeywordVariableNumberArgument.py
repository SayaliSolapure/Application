def StudentInfo(**other):
    print(other)
    for i,j in other.items():
        print(i,j)

print("Demonstration of keyword variable number of Arguments")

StudentInfo(age=28, address="Sinhagad Road",mobile=7219123322,company="Marvellous")