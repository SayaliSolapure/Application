print("____Marvellous Infosystems by Piyush Khairnar____")

print("Demonstration of List")

batches = ["PPA","LB","Angular","Python"]

print(batches)
print(batches[0])
print(batches[1])
print(batches[-1])
print(batches[1:])
print(batches[:3])

data1 = [11,"Marvellous",3.14]
print(data1)

data2 = [21,"Infosystems",6.10]

combined = [data1,data2]
print(combined)

batches.append("MEAN")
print(batches)

batches.insert(2,"LSP")
print(batches)

batches.remove("LSP")
print(batches)

batches.pop()
print(batches)

batches.pop(2)
print(batches)

del batches[1:]
print(batches)

batches.extend(["LB","Python","Angular","MEAN"])
print(batches)

batches.sort()
print(batches)