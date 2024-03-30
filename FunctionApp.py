print("____Marvellous Infosystems by Piyush Khairnar____")
print("Demonstration of Advanced functions")

def Marvellous1():
    print("Inside Marvellous1")

def Marvellous2(value):
    print("Inside Marvellous2")
    print("Accepted value is : ",value)

def Marvellous3(value):
    print("Inside Marvellous3")
    print("Accepted value is : ",value)
    return value+1

def Marvellous4(value1,value2):
    print("Inside Marvellous4")
    add = value1 + value2
    sub = value1 - value2
    return add,sub

def Marvellous5():
    print("Inside Marvellous5")
    Marvellous1()

def Marvellous6():
    print("Inside Marvellous6")
    def InnerFun():
        print("InnerFun")
    InnerFun()

no = 11

Marvellous1()
Marvellous2(no)
ret = Marvellous3(no)
print("Return value is : ",ret)

Marvellous5()

ret1,ret2 = Marvellous4(10,4)
print("Addition is : ",ret1)
print("Substraction is : ",ret2)