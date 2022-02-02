#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, a[1001], b[1001], flag =0 ;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if(a[i] != b[i]) flag = 1;
    }
    if( flag == 1) {
        cout << "rated";
        return 0;
    }
    for(int i = 0; i< n-1 ; i++)
    for( int j = i+ 1; j < n; j++)
        if( a[i] < a[j]){ 
            
            flag = -1;
        }

    if(flag == -1) cout << "unrated";
    else cout << "maybe";

    return 0;
}