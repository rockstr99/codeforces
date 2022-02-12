#include "bits/stdc++.h"

using namespace std;

int main()

{
    int n, res = 0;
    cin >> n;
    unordered_map<string, int> mp;
    mp["Tetrahedron"]= 4;
    mp["Cube"] = 6;
    mp["Octahedron"] =8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    for(int i = 0 ; i < n; i++)
    {
        string str;
        cin >> str;
        int f = mp[str];
        res += f;

   

    }
    cout << res<< endl;


    return 0;
}