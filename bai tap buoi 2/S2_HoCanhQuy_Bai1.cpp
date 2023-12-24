#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >>c;
    if(a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Day khong phai la tam giac";
    }
    else if(a == b && b == c)
    {
        cout << "Day la tam giac deu";
    }
    else if(a + b > c && b + c > a && a + c > b)
    {
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            cout << "Day la tam giac vuong";
        }
        else if(a == b || b == c || a == c)
        {
            cout << "Day la tam giac can";
        }
        else if(a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b)
        {
            cout << "Day la tam giac tu";
        }
        else
        {
            cout << "Day la tam giac nhon";
        }
    }
    else
    {
        cout << "Day khong phai la tam giac";
    }
    return 0;
}
