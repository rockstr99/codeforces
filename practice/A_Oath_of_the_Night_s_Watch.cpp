#include "bits/stdc++.h"

#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], c = 0;
    for(int i = 0; i< n ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 0; i< n; i++) if(arr[i] > arr[0] && arr[i] < arr[n -1]) c++;

    cout << c; 

    return 0;
}