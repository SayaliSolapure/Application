print("____Marvellous Infosystems by Piyush Khairnar____")
print("Demonstration of Lambda : Anonymous Functions")

def add(no1,no2):
    return no1 + no2

Value1 = 10
Value2 = 5

ret = add(Value1, Value2)

print("Addition is {} with regular function".format(ret))

fp = lambda no1, no2 : no1 + no2

ret = fp(Value1, Value2)

print("Addition is {} with lambda function".format(ret))