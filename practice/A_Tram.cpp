#include "bits/stdc++.h"
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int mx = 0, c = 0;
    for(int i = 0; i< n ; i++)
    {
        int a, b;
        cin >> a >> b;
        c += b - a;
        mx = max(c, mx);

    }
    cout << mx;
    return 0;
}