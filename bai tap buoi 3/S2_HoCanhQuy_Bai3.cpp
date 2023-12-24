#include <iostream>
using namespace std;
int main()
{
    int x, cnt = 0, s = 0;
    do
    {
        cout << "Nhap x: ";
        cin >> x;
    }
    while(x <= 0);
    for(int i = 1; i < x; i++)
    {
        if(x % i == 0)
        {
            cnt++;
            s += i;
        }
    }
    cout << x << " co " << cnt << "uoc duong" << endl;
    cout << "Tong cua chung la: " << s;
    return 0;
}
