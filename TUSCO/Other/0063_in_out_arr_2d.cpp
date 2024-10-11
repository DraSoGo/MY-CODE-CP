#include <bits/stdc++.h>
using namespace std;
main(){
    int a,b,c;
    cin >> a >> b;
    int arr [a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
}