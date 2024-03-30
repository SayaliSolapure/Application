import numpy as np
import pandas as pd
from copy import deepcopy
from matplotlib import pyplot as plt

def MarvellousKMean():
    print("______________________")
    center_1 = np.array([1,1])
    print(center_1)
    print("______________________")
    center_2 = np.array([5,5])
    print(center_2)
    print("______________________")
    center_3 = np.array([8,1])
    print(center_3)
    print("______________________")
    data_1 = np.random.randn(7,2) + center_1
    print("Elements of first cluster with size" + str(len(data_1)))
    print(data_1)
    print("______________________")
    data_2 = np.random.randn(7,2) + center_2
    print("Elements of second cluster with size" + str(len(data_2)))
    print(data_2)
    print("______________________")
    data_3 = np.random.randn(7,2) + center_3
    print("Elements of third cluster with size" + str(len(data_3)))
    print(data_3)
    print("______________________")
    data = np.concatenate((data_1, data_2, data_3), axis = 0)
    print("Size of complete data set" + str(len(data)))
    print(data)
    print("______________________")
    plt.scatter(data[:,0], data[:,1], s = 7)
    plt.title("Marvellous Infosystems : Input Dataset")
    plt.show()
    print("______________________")

    k = 3

    n = data.shape[0]
    print("Total number of elements are : ", n)
    print("______________________")
    c = data.shape[1]
    print("Total number of features are : ", c)
    print("______________________")
    mean = np.mean(data, axis = 0)
    print("Value of mean : ", mean)
    print("______________________")
    std = np.std(data, axis = 0)
    print("Value of std : ", std)
    print("______________________")
    centers = np.random.randn(k,c) * std + mean
    print("Random points are : ", centers)
    print("______________________")
    plt.scatter(data[:,0], data[:,1], c = 'r', s = 7)
    plt.scatter(centers[:,0], centers[:,1], marker = "*", c = 'g', s = 150)
    plt.title('Marvellous Infosystems : Input Dataset with random centroid *')

    plt.show()
    print("______________________")

    centers_old = np.zeros(centers.shape)
    centers_new = deepcopy(centers)

    print("Values of old centroids")
    print(centers_old)
    print("______________________")

    print("Values of new centroids")
    print(centers_new)
    print("______________________")

    data.shape
    clusters = np.zeros(n)
    distances = np.zeros((n,k))

    print("Initial distances are")
    print(distances)
    print("______________________")

    error = np.linalg.norm(centers_new - centers_old)
    print("Value of error is : ", error)

    while error != 0:
        print("Value of error is : ", error)
        print("Measure the distance to every center")

        for i in range(k):
            print("Iteration number : ", i)
            distances[:,i] = np.linalg.norm(data_centers[i], axis = 1)

        clusters = np.argmin(distances, axis = 1)

        centers_old = deepcopy(centers_new)

        for i in range(k):
            centers_new[i] = np.mean(data[clusters == i], axis = 0)
        error = np.linalg.norm(centers_new - centers_old)

    centers_new

    plt.scatter(data[:,0], data[:,1], s = 7)
    plt.scatter(centers_new[:,0], centers_new[:,1],marker = "*", c = 'g', s = 150)
    plt.title('Marvellous Infosystems : Final data with Centroid')
    plt.show()

def main():
    print("_____Marvellous Infosystems by Piyush Manohar Khairnar_____")

    print("Unsupervised Machine Learning")

    print("Clustering using K Mean Algorithm")

    MarvellousKMean()

if __name__ == "__main__":
    main() 