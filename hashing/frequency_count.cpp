#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "enter the size of testing elements";

    cin >> q;
    int number;
    while (q--)
    {
        cin >> number;
        // fetch
        cout << "the freqency of " << number<<" " << "is ";

        cout << hash[number] << endl;
    }

    return 0;
}

// only for int i am talk about;
// in the main func you only declare array of the array of size 10^6 /for boolean it can be 10^7
// in the globally you only declare array of the array of size 10^7 /for boolean it can be 10^8