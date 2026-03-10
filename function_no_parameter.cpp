#include <iostream>
using namespace std;

int length, width;
//This is the function to get input from user
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
//this will give area of rectangle
int main()
{
    input();
    output();
}


