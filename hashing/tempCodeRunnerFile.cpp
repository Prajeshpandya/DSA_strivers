#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "enter the testing string ";

    cin >> s;

    // pre compiled
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int q;
    cout << "enter the length testing string ";

    cin >> q;

    char c;

    while(q--)
    {
        cout << "enter the testing char ";

        cin >> c;

        // fetch the values
        cout << "the freqency of " << c << " " << "is " << endl;

        cout << hash[c - 'a'];
    }

    return 0;
}