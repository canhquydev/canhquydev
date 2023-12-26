#include <iostream>
#include <iomanip>
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
int number_min(int arr[], int n)
{
    int nmin = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < nmin)
        {
            nmin = arr[i];
        }
    }
    return nmin;
}
float medium_score(int arr[], int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int b[n+1];
    for(int i = 0; i < n; i++)
    {
        b[i+1] = arr[i];
    }
    b[0] = k;
    for(int i = 0; i < n + 1; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Min la: " << number_min(arr, n) << endl;
    cout << "Max la: " << number_max(arr, n) << endl;
    cout << "Medium score la: " << setprecision(3) << fixed << medium_score(arr, n);
    system("pause");
    return 0;
}
