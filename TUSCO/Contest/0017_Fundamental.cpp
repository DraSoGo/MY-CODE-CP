#include<bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.in", "r", stdin);
    // freopen("output.in", "w", stdout);
    int t,mx = 0;
    cin >> t;
    int T[t];
    for (int i = 0; i < t; i++)
    {
        cin >> T[i];
        int a = T[i];
        mx = max(mx,a);
    }
    int A[mx],k = 0,ch;
    memset(A,0,sizeof(A));
    for(int i = 2;i < mx;i++)
    {
        ch = 0;
        for(int j = 2;j*j <= i;j++)
        {
            if(i % j == 0)
            {
                ch = 1;
                break;
            }
        }
        if (ch == 0)
        {
            A[k] = i;
            k++;
        }
    }
    for (int j = 0; j < t; j++)
    {
        long long ch = 0;
        if (T[j] == 1)
        {
            break;
        }
        for (int i = 0; i < T[j]; i++)
        {
            if (T[j] == 1)
            {
                break;
            }
            
            while (T[j] % A[i] == 0)
            {
                T[j] = T[j]/A[i];
                ch++;
            }
        }
        cout << ch << "\n";
    }
    return 0;
    
}