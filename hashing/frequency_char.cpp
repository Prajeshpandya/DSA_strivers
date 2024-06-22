#include <bits/stdc++.h>
using namespace std;

//65-90 A-Z
//97-122 a-z
int main()
{
    string s;
    cout << "enter the testing string :";

    cin >> s;

    // pre compiled
    int hash[26] = {0};
    // when we have to check for the uppercase and lowercase also then we have to made the hashmap 256
    //    int hash[256] = {0}; then there are not requirment of the minus with the 'a'
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
    }

    int q;
    cout << "enter the length testing string :";

    cin >> q;

    char c;

    for (int i = 0; i < q; i++)
    {
        cout << "enter the testing char: ";

        cin >> c;

        // fetch the values
        cout << "the freqency of " << c << " " << "is :" << hash[c - 'a'] << endl;
    }

    return 0;
}