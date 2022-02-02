#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x;
    unordered_map<int, int> mp;
    for(int i= 1; i<= x; i++) {
        int j;
        cin >> j;
        mp[j]++;
    }
    cin >> y;
    for(int i = 1; i<= y; ++i)
    {
        int j;
        cin >> j;
        mp[j]++;
    }
    if(mp.size() == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";


    return 0;
}