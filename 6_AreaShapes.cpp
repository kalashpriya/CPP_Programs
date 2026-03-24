/* Output:
Select the shape
1)Square
2)Rectangle
3)Circle
Your choice - 1
Enter the side : 4
The area of square is : 16
*/

//Implementation
#include <iostream>
using namespace std;
class Shape
{
    public :
    string colour;
    float area, perimeter;

    void fillshapes()
    {
        cout<<"Shape is filled";
    }
};
class Circle : public Shape
{
    public :
    int radius,area;
    void input()
    {
        cout<<"Enter the radius";
        cin>>radius;
    }
    void calculate()
    {
        area=3.14*(radius*radius);
    }
    void display()
    {
        cout<<"The area of the circle is : "<<area;
    }
};
class Square : public Shape
{
    public:
    int side,area;
    void input()
    {
        cout<<"Enter the side : ";
        cin>>side;
    }
    void calculate()
    {
        area=side*side;
    }
    void display()
    {
        cout<<"The area of square is : "<<area;
    }
};
class Rectangle : public Shape
{
    public:
    int l,b,area;
    void input()
    {
        cout<<"Enter the length : ";
        cin>>l;
        cout<<"Enter the breadth : ";
        cin>>b;
    }
    void calculate()
    {
        area=l*b;
    }
    void display()
    {
        cout<<"The area of the rectangle is : "<<area;
    }
};
int main()
{
    // Object creation
    int t;
    cout << "Select the shape\n1)Square\n2)Rectangle\n3)Circle\nYour choice - ";
    cin >> t;
    Square s;
    Rectangle r;
    Circle c;
    switch(t)
    {
        case 1:
        s.input();
        s.calculate();
        s.display();
        break;
        case 2:
        r.input();
        r.calculate();
        r.display();
        break;
        case 3:
        c.input();
        c.calculate();
        c.display();
        break;
        default:
        cout << "Invalid Choice";
    }
}