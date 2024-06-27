#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)

{ // after the first iteration the max value at index n-1:
    // so the loop start from
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     // i represents the last index of the current unsorted section of the array.

    //     for (int j = 0; j <= i - 1; j++) // i-1 means the comparision perform between 0th to just before the max index.
    //     {

    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        // i represents the last index of the current unsorted section of the array.

        for (int j = 0; j <n-1-i; j++)        {

            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
//here is the multiple approaches to solve problem..

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