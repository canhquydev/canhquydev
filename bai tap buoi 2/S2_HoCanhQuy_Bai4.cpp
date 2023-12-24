#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a, b;
    cin >> a;
    if(a > 0 && a <= 50)
    {
        cout << a * 1678 << " VND";
    }
    else if(a > 50 && a <= 100)
    {
        b = 50 * 1678 + (a - 50) * 1734;
        cout << b << " VND";
    }
    else if(a > 100 && a <= 200)
    {
        b = 50 * 1678 + 50 * 1734 + (a - 100) * 2014;
        cout << b << " VND";
    }
    else if(a > 200 && a <= 300)
    {
        b = 50 * 1678 + 50 * 1734 + 100 * 2014 + (a - 200) * 2536;
        cout << b << " VND";
    }
    else if(a > 300 && a <= 400)
    {
        b = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (a - 300) * 2834;
        cout << b << " VND";
    }
    else
    {
        b = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (a - 400) * 2927;
        cout << b << " VND";
    }
    return 0;
}
