#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a1 = 0, a0= 0, b0= 0, b1 = 0;
    for(int i = 0; i< n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a == 0 ) a0++;
        else if(a == 1) a1++;
        if(b == 0) b0++;
        else if(b == 1 ) b1++;

    }
    cout << (n - max(a1, a0) +  n - max(b1, b0) );
    // cout << min((n - a0) + (n - b1), (n - a1) + (n - b0));

    return 0;
}