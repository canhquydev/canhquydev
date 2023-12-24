#include <iostream>
using namespace std;
int main()
{
    int n, l = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int cnt = n - i;
        for(int j = 1; j <= cnt; j++)
        {
            cout << " ";
        }
        for(int k = 1; k <= l; k++)
        {
            cout << "x";
        }
        cout << endl;
        l = l + 2;
    }
    return 0;
}
