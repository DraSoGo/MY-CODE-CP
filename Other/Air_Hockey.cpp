#include <bits/stdc++.h>
using namespace std;
int main()
{
    int W,L,n,x,ch,p;
    cin >> W >> L >> n;
    int G[L][2*W+1];
    for (int i = 0; i < n; i++)
    {
        ch = 0;
        memset(G,0,sizeof(G));
        p = W;
        for (int j = 0; j < L; j++)
        {
            cin >> x;
            if (x == 0)
            {
                p--;
                if (p >= 0)
                {
                    G[j][p] = 1;
                }
                else
                {
                    ch = -1;
                }
            }
            else
            {
                p++;
                if (p < 2*W+1)
                {
                    G[j][p] = 1;
                }
                else
                {
                    ch = -1;
                }
            }
        }
        if (ch != -1)
        {
            for (int j = 0; j < L; j++)
            {
                for (int k = 0; k < 2*W+1; k++)
                {
                    if ((k == 0 || k == 2*W) && G[j][k] == 1)
                    {
                        ch = 1;
                        break;
                    }
                }
                if (ch == 1)
                {
                    break;
                }
            }
        }
            // for (int j = 0; j < L; j++)
            // {
            //     for (int k = 0; k < 2*W+1; k++)
            //     {
            //         cout << G[j][k] << " ";
            //     }
            //     cout << "\n";
            // }
        cout << ch << "\n";
    }
}