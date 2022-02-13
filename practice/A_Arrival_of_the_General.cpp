#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int mxval = -1 ,mxind = 0, mnval = 101, mnind = 0;
    for(int i = 1; i<= n ; i++)
    {
        int a; 
        cin >> a;
        if(a > mxval) {
            mxind = i;
            mxval = a;
        }
        if( a <= mnval)
        {
            mnval = a;
            mnind = i;
        }
    }


    if(mxind > mnind)
    {
        cout << mxind - 1 + n  - mnind - 1;
    }
    else cout << mxind - 1 + n - mnind;

    return 0;
}