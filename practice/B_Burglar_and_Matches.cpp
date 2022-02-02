#include "bits/stdc++.h"

using namespace std;

bool sortBy( pair<int , int > &a,  pair<int, int > &b)
{
    return (a.second > b.second);
}

int main()
{
    int m , n;
    cin >> m >> n;
    pair<int, int > arr[n];
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n, sortBy);
    // reverse(arr, arr + n);

    int res = 0;
    for(int i = 0; i < n ; i++)
    {
        int x = min (arr[i].first, m);
        res += x * arr[i].second;
        m -= x;
    }

    cout << res<< endl;


    return 0;
}