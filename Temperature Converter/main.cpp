#include <iostream>

using namespace std;

float temperatureConversion(float &degree,const string &originalUnit,const string &targetUnit) {

    if (originalUnit == "C") {
        if (targetUnit == "F") {
            degree = (degree * 1.8f) + 32;
        } else if (targetUnit == "K") {
            degree = degree + 273.15f;
        } else {
            cout << "Conversion Error";
            return -1;
        }

    } else if (originalUnit == "F") {
        if (targetUnit == "C") {
            degree = (degree - 32) * 0.5555556f;
        } else if (targetUnit == "K") {
            degree = (degree + 459.67f) * 0.5555556f;
        } else {
            cout << "Conversion Error";
            return -1;
        }

    } else if (originalUnit == "K") {
        if (targetUnit == "C") {
            degree = degree - 273.15f;
        } else if (targetUnit == "F") {
            degree = (degree * 1.8f) - 459.67f;
        } else {
            cout << "Conversion Error";
            return -1;
        }
    }
    return degree;
}


int main() {
    cout << "\nTemperature Converter V1.0\n";

    float degree {};
    cout << "What is the temperature (degree):";
    cin >> degree;

    string originalUnit;
    cout << "What is the current unit (C/F/K):";
    cin >> originalUnit;

    string targetUnit;
    cout << "What unit do you want to convert to (C/F/K):";
    cin >> targetUnit;

    float temperatureConverted = temperatureConversion(degree, originalUnit, targetUnit);

    cout << "Your new temperature is: " << temperatureConverted << targetUnit;

    return 0;
}