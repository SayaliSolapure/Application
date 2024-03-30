import os

def Checkfile(FileName):
    if os.path.exists(FileName):
        fd = open(FileName,"a")
        print("File exists")
    else:
        print("File does not exists")

def main():
    print("Enter the file name to check : ")
    Name = input()

    Checkfile(Name)

if __name__ == "__main__":
    main()