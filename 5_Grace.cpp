/* Output:
Enter class(1,2 or 3)=1
Enter failed subjects=2
Grace Awarded=10 marks
*/

//Implementation
#include <iostream>
using namespace std;
int main() 
{
    int c,f,g;
    cout<< "Enter class(1,2 or 3)=";
    cin >> c;
    cout<< "Enter failed subjects=";
    cin>> f;
    switch(c)
    {
        case 1:
            if(f>3)
            g=0;
            else
            g=5*f;
        break;
        case 2:
            if(f>2)
            g=0;
            else
            g=4*f;
        break;
        case 3:
            if(f>1)
            g=0;
            else
            g=5*f;
        break;
        default:
        cout<< "Invalid Input";
    }
    cout<< "Grace Awarded="<<g<<" marks";
    return 0;
}