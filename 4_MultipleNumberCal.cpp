/* Output:
Enter number=5 
1 for Factorial
2 for Prime Number
3 for Even or Odd
4 for Exit
Your choice=1
Factorial=120
*/

//Implementation
#include <iostream>
using namespace std;
int main() {
    int num,ch,c,fact=1;
    cout<<"Enter number=";
    cin>>num;
    cout<<"1 for Factorial\n2 for Prime Number\n3 for Even or Odd\n4 for Exit\nYour choice=";
    cin>>ch;
    switch(ch)
    {
     case 1:
     for(int i=1;i<=num;i++)
     fact=fact*i;
     cout<<"Factorial="<< fact;
     break;

     case 2:
     for(int i=1;i<=num;i++)
     {
     if(num%i==0)
     c++;
     }
     if(c==2)
     cout<<"Prime Number";
     else
     cout<<"Composite Number";
     break;

     case 3:
     if(num%2==0)
     cout<<"Even Number";
     else
     cout<<"Odd Number";
     break;
     
     case 4:
     cout<<"Exit";
     break;
     default:
     cout<<"Invalid Input";
    }
    return 0;
}