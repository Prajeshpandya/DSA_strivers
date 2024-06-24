#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)

{ // after the first iteration the max value at index n-1:
    // so the loop start from
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++) // i-1 means the comparision perform between 0th to just before the max index.
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble(arr, n);

    for (auto ls : arr)
    {
        cout << ls << " ";
    }

    return 0;
}