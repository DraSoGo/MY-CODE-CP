#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m,n,ch = 0,co = 1,i = 0;
    cin >> m >> n;
    int M[m];
    memset(M,0,sizeof(M));
    while (ch != m)
    {
        if (M[i] == 0)
        {
            if (co == n)
            {
                M[i] = 1;
                cout << i+1 << " ";
                ch++;
            }
            co++;
            if (co == n+1)
            {
                co = 1;
            }
        }

        i++;
        if (i == m)
        {
            i = 0;
        }
    }
    
}