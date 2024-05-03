#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ch,co = 0,x = 8000000;
    cin >> n;
    bool A[x];
    memset(A,0,sizeof(A));
    for (int i = 2; i < x; i++)
    {
        if (A[i] == 0)
        {
            for (int j = i+i; j < x; j+=i)
            {
                A[j] = 1;
            }
        }
    }
    for (int i = 2; i < x; i++)
    {
        //cout << A[i] << " ";
        if (A[i] == 0)
        {
            co++;
        }
        if (co == n)
        {
            cout << i;
            break;
        }
        
    }
}