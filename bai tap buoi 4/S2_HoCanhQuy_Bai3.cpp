#include <iostream>
using namespace std;
void sort_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                int mid = arr[i];
                arr[i] = arr[j];
                arr[j] = mid;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < 0){
            arr[i] = -arr[i] + 3;
        }
    }
    sort_arr(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
