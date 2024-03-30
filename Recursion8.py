def Add(No):
    if(No <= 0):
        return No
    else:
        return (No + Add(No-1))

Ret = Add(3)

print("Result is : ", Ret)