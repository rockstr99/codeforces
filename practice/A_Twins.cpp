#include "bits/stdc++.h"

using namespace std;


int main()
{
    int n ;
    cin >> n;
    int arr[n], sum = 0;
    for(int i = 0; i< n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 2;
    sort(arr, arr+ n);
    int sum2 =0, c =0;
    for(int i = n -1; i >=0 ; i--)
    {
        sum2 += arr[i];
        ++c;
        if(sum2 > sum ) break;
    }
    cout << c;


    return 0;
}