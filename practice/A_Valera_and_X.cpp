#include "bits/stdc++.h"

using namespace std;

int main()
{   
    int n;
    cin  >> n;
    char arr[n][n];
    for(int i = 0; i< n ; i++)
    for(int j = 0; j < n; j++)
        cin >> arr[i][j];

    char x = arr[n/2][n/2];
    char y = arr[0][1];
    int flag =0;
    for(int i = 0; i< n; i++)
    {
        //conditions where the matrix is not x
        if(arr[i][i] != x || arr[i][n - (i + 1)] != x || arr[i][i] == y || arr[i][n - (i +1 )] == y)
        {
            flag =1 ;
            break;
        }
        for(int j = 0; j< n ; j++)
        {
            //check where characters other than diagnols are not y
            if(j != i && j != (n - (i + 1)))
            {
                if(arr[i][j] != y) {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if(flag) cout << "NO";
    else cout << "YES";


    return 0;
}