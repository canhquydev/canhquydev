#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a, b;
    char s;
    cin >> a;
    cin >> s;
    cin >> b;
    switch(s)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
    case '-':
        cout << a << " - " << b << " = " << a - b;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case 'x':
        cout << a << " x " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << (float)a / b;
    }
    return 0;
}
