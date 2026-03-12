#include <iostream>
using namespace std;

int area(int side)
{
    return side * side;
}

int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    cout << "Area of Square: " << area(4) << endl;
    cout << "Area of Rectangle: " << area(5,3) << endl;

    return 0;
}