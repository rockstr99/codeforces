#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    char d, c;
    cin >> n;
    char arr[n][n];
    for(int i = 0; i < n; i++)
    for(int j = 0; j< n; j++)
      {
        cin >> arr[i][j];
        if(i == 0 and j == 0) d = arr[i][j];
        else c = arr[i][j];
      }  

    int counter = 0;
    for(int i = 0; i< n; i++)
    for(int j = 0; j< n; j++)
    {
        // if(j+counter || j == n-1 - counter)
        if(arr[i][j+counter] != d and arr[i][n-1-counter] != d) //this means another char is at dia
        {
            cout << "no"<< endl;
            return 0;
        }
        else if(j != j+counter and j!= n- 1 - counter)
        {
            if(arr[i][j] != c) {
                cout << "no"<< endl;
                return 0;
            }
        }
        ++counter;
    }
cout << "yes";


    return 0;
}