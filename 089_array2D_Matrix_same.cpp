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
    int d,e;
    cin >> d >> e;
    int A [d][e];
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> A[i][j];
        }
    }
    bool ch;
    int f = min(a,d),g = min(b,e);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (d == a && b == e && A[i][j] == arr[i][j])
            {
                ch = true;
            }
            else
            {
                ch = false;
                break;
            }
            
        }
    }
    if (ch == true)
    {
        cout << "A==B";
    }
    else
    {
        cout << "A!=B";
    }
}