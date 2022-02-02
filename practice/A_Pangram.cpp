#include "bits/stdc++.h"

using namespace std;

int main()
{   
    int n ;
    cin >> n;
    // string s;
    unordered_map<char, int> mp;
    for(int i = 0; i< n; i++) {
        char c;
        cin >> c;
        // s.push_back(tolower(c));
        mp[tolower(c)]++;
    }
    if(mp.size() == 26) cout << "YES";
    else cout << "NO";

    return 0;
}