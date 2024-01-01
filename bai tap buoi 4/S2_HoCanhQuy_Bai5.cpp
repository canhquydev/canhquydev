#include <iostream>
using namespace std;

int main()
{
    int n, cnt2 = 0, cnt1 = 0, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 200)
        {
            cnt2++;
        }
        else if(arr[i] == 100)
        {
            cnt1++;
        }
        else
        {
            i--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if(sum % 2 != 0 || n == 1)
    {
        cout << "NO";
    }
    else if((cnt2 % 2 != 0 && cnt1 % 2 == 0) || (cnt2 % 2 == 0 && cnt1 % 2 == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
