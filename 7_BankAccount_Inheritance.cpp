/* Output:
Enter name of account holder - Kalash
Enter the account number - 123456789
Select the type of transaction
1)Deposit
2)Withdrawl
Your choice - 2
Current Balance=1000
Enter the amount to be withdrawn - 300
Enter the Interest Rate=8
Name    Acc Number Interest     Balance Amount
Kalash  123456789       56      756
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
    void input()
    {
        cout << "Enter name of account holder - ";
        cin >> acc_nm;
        cout << "Enter the account number - ";
        cin >> acc_no;
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
};
// Derive SavingsAccount that adds an interestRate and a method addInterest() that updates the balance.
class SavingsAccount : public BankAccount
{
    float ir,interest;
    public:
    void addInterest()
    {
        cout << "Enter the Interest Rate=";
        cin >> ir;
        interest=bal*(ir/100);
        bal+=interest;
    }
    void display()
    {
        cout << "Name"<<"\t"<<"Acc Number"<<" "<<"Interest"<<"\t"<<"Balance Amount\n";
        cout << acc_nm<<"\t"<<acc_no<<"\t"<<interest<<"\t"<<bal;
    }
};
    int main()
    {
        int t;
        SavingsAccount obj;
        obj.input();
        cout << "Select the type of transaction\n1)Deposit\n2)Withdrawl\nYour choice - ";
        cin >> t;
        if (t==1)
        obj.deposit();
        else if (t==2)
        obj.withdraw();
        else
        cout << "\nInvalid Input";
        obj.addInterest();
        obj.display();
    }