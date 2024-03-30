print("Demonstration of List")

data = [11,21,51,101,21,11]
data1 = [11,90.80,True,"Hello"]

print("Data is Heterogeneous : ", data1)
print("Data is Ordered :", data1)
print("Data at index2 : ",data1[2])
print("Data with duplicate elements : ", data)

print("List is mutable")
data.append(201)
print("Data after append : ", data)
data.pop()
print("Data after pop : ", data)