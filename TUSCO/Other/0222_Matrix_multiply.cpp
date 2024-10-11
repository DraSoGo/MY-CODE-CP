#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    cin >> y1 >> x1;
    int A[y1][x1];
    for (int i = 0; i < y1; i++)
    {
        for (int j = 0; j < x1; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> y2 >> x2;
    int B[y2][x2];
    for (int i = 0; i < y2; i++)
    {
        for (int j = 0; j < x2; j++)
        {
            cin >> B[i][j];
        }
    }
    if (x1 != y2)
    {
        cout << "Can not multiply";
    }
    else
    {
        for (int i = 0; i < y1; i++)
        {
            for (int j = 0; j < x2; j++)
            {
                int sum = 0;
                for (int k = 0; k < y2; k++)
                {
                    //cout << A[i][k] << " " << B[k][j] << "\n";
                    // cout << A[j][i] << "\n";
                    sum += A[i][k] * B[k][j];
                }
                cout << sum << " ";
                //cout << "\n";
            }
            cout << "\n";
        }
        
    }
    
}