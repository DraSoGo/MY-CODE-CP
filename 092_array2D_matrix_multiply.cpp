#include <bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int A,B,C,D;
    cin >> A >> B;
    int a[A][B];
    for(int i = 0;i < A;i++)
    {
        for(int j = 0;j < B;j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> C >> D;
    int b[C][D];
    for(int i = 0;i < C;i++)
    {
        for(int j = 0;j < D;j++)
        {
            cin >> b[i][j];
        }
    }
    int c[A][B];
    if(B == C)
    {
        for(int i = 0;i < A;i++)
        {
            for(int j = 0;j < D;j++)
            {
                int sum = 0;
                for(int k = 0;k < B;k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                cout<< sum <<' ';
            }
            cout<<'\n';
        }
    }
    else
    {
        cout << "Can not multiply";
    }
    return 0;
}
    // c[0][0] = (a[0][0] * b[0][0]) + (a[0][1] * b[1][0]);
    // c[0][1] = (a[0][0] * b[0][1]) + (a[0][1] * b[1][1]);
    // c[1][0] = (a[1][0] * b[0][0]) + (a[1][1] * b[1][0]);
    // c[1][1] = (a[1][0] * b[0][1]) + (a[1][1] * b[1][1]);