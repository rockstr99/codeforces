#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int arr[n], res = 0;
    for(int i = 0; i< n ; i++) cin >> arr[i];
    for(int i = 0; i< n; i++)
    {
        int count = 1, k = i;
        //find the left downward slope;
        for(int j = i - 1; j>= 0; j--)
        {
            if(arr[j] <= arr[k]) count++;
            else break;

            k--;
        }
        k = i;
        //find the right downward slope;
        for(int j= i +1; j<n; j++) 
        {
            if(arr[j] <= arr[k] ) count++;
            else break;

            k++;
        }
        res = max(res, count);
    }
    cout << res;

    return 0;
}