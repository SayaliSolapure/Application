import sys

print("____Marvellous Infosystems by Piyush Khairnar____")

print("Demonstration of Command Line Arguments")

print("Application name : "+sys.argv[0])

x = int(sys.argv[1])

y = int(sys.argv[2])

z = x + y

print(z)