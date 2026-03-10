#include <iostream>
using namespace std;

int length, width;

void input()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
}
//This will get values of length and width
int rectangleArea(int a, int b)
{
    return a * b;
}

int rectanglePerimeter(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    cout << "The area is: " << rectangleArea(length, width) << endl;
}

int main()
{
    input();
    output();

    cout << "The perimeter is: " << rectanglePerimeter(length, width);
}

