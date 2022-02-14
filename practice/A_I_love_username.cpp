#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, mx, mn, count = 0;
    cin >> n;
    for(int i = 0; i< n ; ++i)
    {
        int a;
        cin >> a;
        if(i == 0) {
            mx = a;
            mn = a;
        }
        else if(a > mx or a < mn)
        {
            if(a > mx) mx = a;
            else if(a < mn) mn = a;
            ++count;
        }

    }
    cout << count << endl;

    return 0;
}