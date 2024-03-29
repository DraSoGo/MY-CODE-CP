#include <bits/stdc++.h>
using namespace std;

int mn = 9999;

void bs(int n,int r,int l)
{

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n = 10,m,ch = 0;
    cin >> m;
    int A[10] = {1,3,4,6,7,9,11,12,20,100};
    sort(A,A+n);
    int l = 0,r = n-1,idx = -1,co = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] == m)
        {
            cout << i+1;
            ch = 1;
        }
        
    }
    if (ch == 0)
    {
        cout << -1;
    }
    
    // while (l < r)
    // {
    //     idx = floor((l+r)/2);
    //     if (A[idx] == m)
    //     {
    //         cout << idx+1;
    //         break;
    //     }
    //     else if (A[idx] > m)
    //     {
    //         r = idx-1;
    //     }
    //     else if (A[idx] < m)
    //     {
    //         l = idx+1;
    //     }
    //     if (l >= r)
    //     {
    //         cout << -1;
    //         break;
    //     }
    // }
    return 0;
}