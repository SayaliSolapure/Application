import os

def Copyfile(FileName):
    if(os.path.exists(FileName)):
        print("File exist")
    else:
        print("File does not exist")

    with open(FileName) as f:
        with open("Third.txt","w") as f1:
            for line in f:
                f1.write(line)

    f.close()

def main():
    print("Enter the file name : ")
    Name = input()

    Copyfile(Name)

if __name__ == "__main__":
    main()