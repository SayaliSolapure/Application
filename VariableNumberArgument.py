def Add(*no):
    ans = 0
    for i in no:
        ans = ans + i

    return ans

print("Demonstration of Variable Number Arguments")

ret = Add(10,20,30)
print("Addition is : ",ret)

ret = Add(10,20,30,40,50,60)
print("Addition is : ",ret)

ret = Add(10,20)
print("Addition is : ",ret)