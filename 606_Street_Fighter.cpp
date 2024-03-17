#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,v,cox = 0,coy = 0,idx = 0,idy = 0;
    cin >> a >> b;
    char c;
    int X[a],Y[a];
    for (int i = 0; i < a; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < a; i++)
    {
        cin >> Y[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        if (c == 'A')
        {
            if (X[idx] == Y[idy])
            {
                cox++;
                coy++;
                idx++;
                idy++;
            }
            else if (X[idx] > Y[idy])
            {
                cox++;
                X[idx] -= Y[idy];
                idy++;
            }
            else if (X[idx] < Y[idy])
            {
                coy++;
                Y[idy] -= X[idx];
                idx++;
            }
            if (idx > a-1)
            {
                idx = 0;
            }
            if (idy > a-1)
            {
                idy = 0;
            }
        }
        else
        {
            int sx = idx,sy = idy;
            for (int j = 0; j < 3; j++)
            {
                cout << X[idx] << " ";
                idx++;
                if (idx > a-1)
                {
                    idx = 0;
                }
            }
            cout << "\n";
            for (int j = 0; j < 3; j++)
            {
                cout << Y[idy] << " ";
                idy++;
                if (idy > a-1)
                {
                    idy = 0;
                }
            }
            cout << "\n";
            idx = sx;
            idy = sy;
        }
    }
    cout << cox << " " << coy;
    return 0;
}