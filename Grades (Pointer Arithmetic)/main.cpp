#include <iostream>

using namespace std;

// passs the pointer and dereferenced array of grades, and the size of array
void averageGrade(double* numOfGrades, int size) {

    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numOfGrades[i];
    }

    cout << "Average grade: " << (sum / size) << "\n";
};

void highestGrade(double*  numOfGrades, int size) {

    double highestNumber = numOfGrades[0];

    for (int i = 0; i < size; i++) {
        if (numOfGrades[i] > highestNumber) {
            highestNumber = numOfGrades[i];
        }
    }

    cout << "Highest Grade: " << highestNumber << "\n";

};

void lowestGrade(double*  numOfGrades, int size) {
    double lowestNumber = numOfGrades[0];

    for (int i = 0; i < size; i++) {

        if (numOfGrades[i] < lowestNumber) {
            lowestNumber = numOfGrades[i];
        }
    }

    cout << "Lowest Grade: " << lowestNumber << "\n";

};

int main() {

    cout << "\nStudent Grade Manager V1.0\n\n";

    int size;
    cout << "How many grades: ";
    cin >> size;

    // cannot declare arrays like this with variables
    //  int numOfGrades[] = size;

    // declares pointer variable with new array based on size variable
    double* numOfGrades = new double[size];

    // loops through the amount entered in size and stores those inputs in numOfGrades array
    for (int i = 0; i < size; i++) {
        cout << "Please enter grade " << i + 1 << ": ";
        cin >> numOfGrades[i];
    }

    // loops through the inputs and outputs them in a string
    cout << "The grades you entered are: ";
    for (int i = 0; i < size; i++) {
        cout << numOfGrades[i];
        if (i < size - 1) cout << ", ";  // No comma after the last number

    }
    cout << "\n";

    // calls a function to determine the average of grades
    averageGrade(numOfGrades, size);
    highestGrade(numOfGrades, size);
    lowestGrade(numOfGrades, size);

    delete[] numOfGrades;
    return 0;
}