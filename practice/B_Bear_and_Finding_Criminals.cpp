#include "bits/stdc++.h"

using namespace std;

int main(){

    int n,a ;
    cin >> n >> a;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    --a; //making a 0 indexing
    int counter = 0;
    if(arr[a]) ++counter;
    for(int i = 1; i< n; i++) 
    {
        int left, right;
        left = a - i;
        right = a + i;
        if(left >= 0 || right < n)
        {
            if(left >= 0 && right < n)
            {
                if(arr[left] && arr[right])  counter+= 2;
            }
            else if(left >= 0 && arr[left]) ++counter;
            else if(right < n && arr[right ] ) ++counter; 
        }
    }

    cout << counter;


    return 0;
}