#include <iostream>
using namespace std;
float giaithua(int n)
{
    int tich = 1;
    for(int i = 1; i <= n; i++)
    {
        tich *=i;
    }
    return tich;
}
int main()
{
    int n;
    cin >> n;
    cout << (giaithua(n) + 1) / giaithua(n + 1);
    return 0;
}
