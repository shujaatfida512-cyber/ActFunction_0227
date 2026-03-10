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

int luasPersegi()
{
    return panjang * lebar;
}

void output()
{
    cout << "Hasilnya : " << luasPersegi();
}

int main()
{
    input();
    output();
}
