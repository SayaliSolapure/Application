import numpy as np
import pandas as pd
from sklearn import preprocessing

def MarvellousPlayPredictor(data_path):
    data = pd.read_csv(data_path, index_col = 0)

    print("Size of Actual dataset",len(data))

    feature_names = ['Weather','Temperature']

    print("Names of Features",feature_names)

    weather = data.Weather
    Temperature = data.Temperature
    play = data.Play

    le = preprocessing.LabelEncoder()

    weather_encoded = le.fit_transform(weather)

    temp_encoded = le.fit_transform(Temperature)
    label = le.fit_transform(play)

    print(temp_encoded)

    features = list(zip(weather_encoded,temp_encoded))

    from sklearn.neighbors import KNeighborsClassifier

    model = KNeighborsClassifier(n_neighbors=3)

    model.fit(features,label)

    predicted = model.predict([[0,2]])

    print(predicted)

def main():
    print("_____Marvellous Infosystems by Piyush Khairnar_____")

    print("Machine Learning Application")

    print("Play predictor application using K Nearest Kneighbors algorithm")

    MarvellousPlayPredictor("PlayPredictor.csv")

if __name__ == "__main__":
    main()