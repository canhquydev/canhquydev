#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a, b, c, smax;
    cin >> a;
    smax = a;
    cin >> b;
    if(b > smax)
    {
        smax = b;
    }
    cin >> c;
    if(c > smax)
    {
        smax = c;
    }
    if(smax == a && smax == b && smax == c)
    {
        a = 0;
        b = 0;
        c = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax == a && smax == b)
    {
        a = 0;
        b = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax ==a && smax == c)
    {
        a = 0;
        c = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax == b && smax == c)
    {
        b = 0;
        c = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax == a)
    {
        a = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax == b)
    {
        b = 0;
        cout << a << " " << b << " " << c;
    }
    else if(smax == c)
    {
        c = 0;
        cout << a << " " << b << " " << c;
    }
    return 0;
}
