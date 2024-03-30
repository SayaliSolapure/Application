import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

def Predictor():

    X = [1,2,3,4,5]
    Y = [3,4,2,4,5]

    print("Values of Independent of variables x : ", X)
    print("Values of Dependent of variables y : ", Y)

    mean_x = np.mean(X)
    mean_y = np.mean(Y)

    print("Mean of Independent variable x : ", mean_x)
    print("Mean of Dependent variable y : ", mean_y)
    n = len(X)

    numerator = 0
    denomenator = 0

    for i in range(n):
        numerator += (X[i] - mean_x) * (Y[i] - mean_y)

        denomenator += (X[i] - mean_x) ** 2

    m = numerator / denomenator

    c = mean_y - (m * mean_x)

    print("Slope of Regression line is : ", m)
    print("Y intercept of Regression line is : ", c)

    x = np.linspace(1,6,n)

    y = c + m * x

    plt.plot(x,y, color='#58b970', label='Regression Line')

    plt.scatter(X,Y, color='#ef5423', label='scatter plot')

    plt.xlabel('X - Independent Variable')
    plt.ylabel('Y - Dependent Variable')

    plt.legend()
    plt.show()

def main():
    print("_____Marvellous Infosystems by Piyush Khairnar_____")

    print("Supervised Machine Learning")

    print("Linear Regression")
    
    Predictor()

if __name__ == "__main__":
    main()