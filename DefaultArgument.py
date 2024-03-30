def Batches3(name, fees = 5000):
    print("Batch name is : ",name)
    print("Fees are : ",fees)

print("Demonstration of Default Arguments")

Batches3('Angular',7500)
Batches3('Angular')
Batches3(fees = 9000, name = 'PPA')
Batches3(name = 'LB')