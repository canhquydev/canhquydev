#include <iostream>
using namespace std;
void NHAP(float &x)
{
    cin >> x;
}
float MAX(float a, float b, float c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
float MIN(float a, float b, float c)
{
    if(a < b && a < c)
    {
        return a;
    }
    else if(b < a && b < c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    float a, b, c, d, e;
    NHAP(a);
    NHAP(b);
    NHAP(c);
    cout << "Max = " << MAX(a, b, c) << ", " << "Min = " << MIN(a, b, c);
    NHAP(d);
    NHAP(e);
    cout << "Max = " << MAX(d, e, MAX(a, b, c)) << ", " << "Min = " << MIN(d, e, MIN(a, b, c));
    return 0;
}
