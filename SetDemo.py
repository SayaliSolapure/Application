print("Demonstration of set")

data = {11,21,51,101,21,11}
data1 = {11, 90.80, True, "Hello"}

print("First set data : ", data)
print("Length of data : ", len(data))
print("Data is heterogeneous : ", data1)
print("Data is unordered : ", data1)
print("Data with unique elements : ", data)
print("Set is Mutable")

data.add(211)
print("Data after insertion : ", data)

data.remove(211)
print("Data after removal : ", data)

data.discard(201)
print("Data after discard : ", data)