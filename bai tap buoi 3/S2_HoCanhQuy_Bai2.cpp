#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    }
    while(n <= 0);
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            s = s - i;
        }
        else
        {
            s = s + i;
        }
    }
    cout << s;
    return 0;
}
