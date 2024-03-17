#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,o,p;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> o >> p;
    int B[o][p];
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    int x,y;
    if (m != o)
    {
        cout << "Can not multiply";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                y = 0;
                for (int k = 0; k < o; k++)
                {
                    y += A[i][k] * B[k][j];
                    //cout << A[i][k] << " " << B[k][j] << " ";
                }
                cout << y << " ";
            }
            cout << "\n";
            
        }
        
    }
    
}