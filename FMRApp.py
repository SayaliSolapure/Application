print("____Marvellous Infosystems by Piyush Khairnar____")
print("Demonstration of Filter Map Reduce")

from functools import reduce

def EvenChk(no):
    return (no % 2 == 0)

def Increase(no):
    return no+2

def Add(a,b):
    return a+b

arr = [8,9,5,16,2,4,21,30,11]

evenArr = list(filter(EvenChk,arr))

print("Data after filter : ", evenArr)

ModArray = list(map(Increase,evenArr))

print("Data after map : ", ModArray)

sum = reduce(Add,ModArray)

print("Data after reduce : ", sum)

evenArr = list(filter(lambda no : (no % 2 == 0), arr))

print("Data after filter using lambda : ", evenArr)

ModArray = list(map(lambda no : (no+2), evenArr))

print("Data after map using lambda : ", ModArray)

sum = reduce(lambda a, b : a+b, ModArray)

print("Addition of even numbers using lambda : ", sum)