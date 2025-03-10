#include <iostream>
using namespace std;

void employeeInfo(int numOfEmployee) {

};

int main() {
    cout << "\nEmployee Salary Manager\n\n";

    // Size of Employees
    int numOfEmployees;
    cout << "How many employees: ";
    cin >> numOfEmployees;
    cout << "Number of employees: " << numOfEmployees << "\n";

    // Structure for employees information
    struct Employee {
        // struct members
        string name = "Unknown";
        double salary = 0;
    };

    //Creates an array of employee structures
    Employee employees[numOfEmployees];



    return 0;
}