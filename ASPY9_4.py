def main():
    File1 = open("First.txt","r")
    File2 = open("Third.txt","r")
    Flag = False
    for line1 in File1:
        for line2 in File2:
            if line1 == line2:
                pass
            else:
                print("Files are not equal")
                Flag = True
            break
    File1.close()
    File2.close()
    if Flag == False:
        print("Files are equal")

if __name__ == "__main__":
    main()