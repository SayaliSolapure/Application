class BookStore:
    def __init__(self,A,B):
        self.BookName = A
        self.BookAuthor = B

    def Display(self):
        First = self.BookName
        return First

        Second = self.BookAuthor
        return Second

def main():
    obj1 = BookStore("LinuxSystemProgramming", "RobertLove")

    NoOfBooks = 0

    obj2 = BookStore("C Programming", "Dennis Ritchie")

    Ans = obj1.Display()
    print("Book name is : ", Ans)

    Ans = obj2.Display()
    print("Author name is : ", Ans)

if __name__ == "__main__":
    main()