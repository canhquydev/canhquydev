#include <iostream>
using namespace std;

int number_max(int arr[], int n)
{
    int nmax = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > nmax)
        {
            nmax = arr[i];
        }
    }
    return nmax;
}
void xoa_mang(int arr[], int &n, int index)
{
    for(int i = index + 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    n--;
}
int main()
{
    int n, cnt = 0 ;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nmax = number_max(arr, n);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == nmax)
        {
            cnt++;
        }
    }
    if(cnt == n)
    {
        cout << 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == nmax)
        {
            xoa_mang(arr, n, i);
            i--;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
