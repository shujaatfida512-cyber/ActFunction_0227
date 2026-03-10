#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan Panjang : ";
    cin >> panjang;

    cout << "Masukkan Lebar : ";
    cin >> lebar;
}

int luasPersegi(int a, int b)
{
    return a * b;
}

int kelilingPersegi(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    cout << "Luasnya : " << luasPersegi(panjang, lebar) << endl;
}

int main()
{
    input();
    output();

    cout << "Kelilingnya : " << kelilingPersegi(panjang, lebar);
}
