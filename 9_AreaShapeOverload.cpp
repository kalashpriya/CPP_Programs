/* Output:
Select the shape
1)Square
2)Rectangle
3)Circle
Your choice - 2
Enter the length of side=3
Enter the length of breadth=4
Area of Rectangle=12
*/

//Implementation
#include <iostream>
using namespace std;
class Shapes
{
    public:
    void area(int a)
    {
        cout << "Area of Square=" << a*a;
    }
    void area(int l, int b)
    {
        cout << "Area of Rectangle=" << l*b;
    }
    void area(double r)
    {
        cout << "Area of Circle="<<3.14*r;
    }
};
int main()
{
    Shapes ob;
    int t;
    cout << "Select the shape\n1)Square\n2)Rectangle\n3)Circle\nYour choice - ";
    cin >> t;
    switch(t)
    {
        case 1:
        int A;
        cout << "Enter the length of side=";
        cin >> A;
        ob.area(A);
        break;
        case 2:
        int L,B;
        cout << "Enter the length of side=";
        cin >> L;
        cout << "Enter the length of breadth=";
        cin >> B;
        ob.area(L,B);
        break;
        case 3:
        double R;
        cout << "Enter the radius=";
        cin >> R;
        ob.area(R);
        break;
        default:
        cout << "Invalid Choice";
    }
}
