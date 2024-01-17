#include <iostream>
using namespace std;
void giaipt(float a, float b, float c, float d, float e, float f, float x, float y)
{
    float a1 = a * -d;
    float b1 = b * -d;
    float c1 = c * -d;
    float d1 = d * a;
    float e1 = e * a;
    float f1 = f * a;
    y = (c1 + f1 ) / (b1 + e1);
    x = (c - b * y) / a;
    cout << "x = " << x << endl;
    cout << "y = " << y;
}
int main()
{
    float a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    giaipt(a, b, c, d, e,f,x, y);
    return 0;
}
