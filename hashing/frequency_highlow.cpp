#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array :";

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for precompute
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        // The fundamental property of a map is that it associates keys with values, forming key-value pairs. Each insertion into a std::map requires both a key and a value.
        mpp[arr[i]]++;
    }

    for (auto ls : mpp)
    {
        cout << ls.first << "=> " << ls.second << endl;
    }

    vector<pair<int, int>> vec(mpp.begin(), mpp.end());

    // [] its called lambda function
    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    int highestFreqElem = vec.front().first;
    int highestFreq = vec.front().second;
    int lowestFreqElem = vec.back().first;
    int lowestFreq = vec.back().second;

    cout << "Element with highest frequency: " << highestFreqElem << " with frequency " << highestFreq << endl;
    cout << "Element with lowest frequency: " << lowestFreqElem << " with frequency " << lowestFreq << endl;

    return 0;
}