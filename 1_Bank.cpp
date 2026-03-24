/* Output:
Enter name of account holder - Kalash
Enter the account number - 123456789
Select the type of transaction
1)Deposit
2)Withdrawl
Your choice - 1
Current Balance=1000
Enter the amount to be deposited - 100
Name    Acc Number      Balance Amount
Kalash  123456789       1100
*/

//Implementation

#include <iostream>
using namespace std;
class BankAccount
{
    public:
    string acc_nm;
    long acc_no;
    float dep,with,bal;
    BankAccount()
    {
        bal=1000.0;
    }
    void deposit()
    {
        
        cout << "Current Balance=";
        cout<< bal;
        cout << "\nEnter the amount to be deposited - ";
        cin >> dep;
        bal+=dep;
    }
    void withdraw()
    {
        
        cout << "Current Balance=";
        cout<< bal;
        cout << "\nEnter the amount to be withdrawn - ";
        cin >> with;
        if(bal>with)
        bal=bal-with;
        else
        cout << "\nInsufficient Balance. Transaction not successful.\n";
    }
    void display()
    {
        cout << "Name"<<"\t"<<"Acc Number"<<"\t"<<"Balance Amount\n";
        cout << acc_nm<<"\t"<<acc_no<<"\t"<<bal;
    }
};
    int main()
    {
        int t;
        BankAccount ob;
        cout << "Enter name of account holder - ";
        cin >> ob.acc_nm;
        cout << "Enter the account number - ";
        cin >> ob.acc_no;
        cout << "Select the type of transaction\n1)Deposit\n2)Withdrawl\nYour choice - ";
        cin >> t;
        if (t==1)
        ob.deposit();
        else if (t==2)
        ob.withdraw();
        else
        cout << "\nInvalid Input";
        ob.display();
    }