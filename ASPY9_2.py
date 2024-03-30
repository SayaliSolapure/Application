import os

def ReadFile(FileName):
    if(os.path.exists(FileName)):
        fd = open(FileName,"r")
        Data = fd.read()
        print("Data from the file is : ")
        print(Data)

        fd.close()

    else:
        print("File is not exist")

def main():
    print("Enter the file name to check : ")
    Name = input()

    ReadFile(Name)

if __name__ == "__main__":
    main()