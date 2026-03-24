/* Output:
Enter A: 1
Enter B: 0
Choose a logic gate:
1. AND
2. OR
3. XOR
4. NOT
Enter your choice: 4
Result of NOT (first input): 0
Result of NOT (second input): 1
*/

//Implementation
#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Choose a logic gate:\n1. AND\n2. OR\n3. XOR\n4. NOT \nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: // AND
            cout << "Result of AND: " << (a & b) << "\n";
            break;
        case 2: // OR
            cout << "Result of OR: " << (a | b) << "\n";
            break;
        case 3: // XOR
            cout << "Result of XOR: " << (a ^ b) << "\n";
            break;
        case 4: // NOT
            cout << "Result of NOT (first input): " << (!a) << "\n";
            cout << "Result of NOT (second input): " << (!b) << "\n";
            break;
        default:
            cout << "Invalid choice!" << "\n";
    }
    return 0;
}