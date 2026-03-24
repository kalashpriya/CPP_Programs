/* Output:
Enter number of employees = 2

Enter name of employee 1 : Kalash
Enter basic salary of employee 1 : 500000
Gross Salary of Kalash = 650000

Enter name of employee 2 : Priya
Enter basic salary of employee 2 : 67000
Gross Salary of Priya = 87100
*/

//Implementation
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    double basicSalary;

    Employee(string n, double b) {
        name = n;
        basicSalary = b;
    }

    void calculate() {
        double hra = 0.20 * basicSalary;
        double da = 0.10 * basicSalary;
        double gross = hra + da + basicSalary;
        cout << "Gross Salary of " << name << " = " << gross <<"\n";
    }
};

int main() {
    int num;
    cout << "Enter number of employees = ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        string mn;
        double mb;
        cout << "\nEnter name of employee " << i + 1 << " : ";
        cin >> mn;
        cout << "Enter basic salary of employee " << i + 1 << " : ";
        cin >> mb;

        Employee ob(mn, mb);  // create object with parameters
        ob.calculate();       // call function
    }
    return 0;
}