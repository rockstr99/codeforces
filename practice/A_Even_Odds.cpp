#include "bits/stdc++.h"
#define ll long long int
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    if(k <= (n + 1)/2) // first half of the seq
    cout << k*2 -1;
    else cout << (k - (n + 1)/2) * 2;

    return 0;
}