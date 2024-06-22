#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array";

    cin >> n;
    int arr[n];
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    //if the value type is int, the default value is 0
    //If the value type is a more complex type (like std::string), the default value is an empty string ("").
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]+=1; 
    }

    int q;
    cout << "enter the size of testing elements";

    cin >> q;

    // for(auto it : mpp){
    //     cout << it.first << " -> " << it.second << endl;
    // }
    while (q--)
    {
        int number;

        cin >> number;
        cout << "the freqency of " << number << " " << "is "<< mpp[number] <<endl;
        // fetch
        cout ;
    }

    // map<int, int>::iterator itr;

    // for (itr = mpp.begin(); itr != mpp.end(); itr++)
    // {
    //     cout << (*itr).first << "-> " << (*itr).second << endl;
    // }


    return 0;
}