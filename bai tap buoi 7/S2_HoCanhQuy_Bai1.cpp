#include <iostream>
using namespace std;
int nmax(int arr[], int n)
{
    int nmax = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(nmax < arr[i])
        {
            nmax = arr[i];
        }
    }
    return nmax;
}
int nmin(int arr[], int n)
{
    int nmin = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(nmin > arr[i])
        {
            nmin = arr[i];
        }
    }
    return nmin;
}
void nhapmang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void xuatmang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void doiso(int arr[], int n)
{
    int indexmin, indexmax;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == nmin(arr,n))
        {
            indexmin = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] == nmax(arr,n))
        {
            indexmax = i;
            break;
        }
    }
    int smin = nmin(arr, n);
    arr[indexmin] = nmax(arr, n);
    arr[indexmax] = smin;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    nhapmang(arr, n);
    doiso(arr,n);
    xuatmang(arr, n);
    return 0;
}
