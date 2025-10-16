#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    a = a + b;   // a = 5
    b = a - b;   // b = 5 - 3 = 2
    a = a - b;   // a = 5 - 2 = 3

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
