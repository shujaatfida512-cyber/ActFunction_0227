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

int rectangleArea()
{
    return length * width;
}

void output()
{
    cout << "The area is: " << rectangleArea();
}

int main()
{
    input();
    output();
}
