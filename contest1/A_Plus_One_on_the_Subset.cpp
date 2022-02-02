#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int arr[n], mx = -1, mn = INT_MAX;
        for(int i = 0; i< n ; i++)
        {
            int x;
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
            arr[i] = x;
        }
        
        cout << mx- mn << endl;
    }
    return 0;
}