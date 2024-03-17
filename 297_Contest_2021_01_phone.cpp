#include <bits/stdc++.h>
using namespace std;
int main()
{
    char N[4][3],B[4][3];
    string n;
    N[0][0] = '1';
    N[0][1] = '2';
    N[0][2] = '3';
    N[1][0] = '4';
    N[1][1] = '5';
    N[1][2] = '6';
    N[2][0] = '7';
    N[2][1] = '8';
    N[2][2] = '9';
    N[3][0] = '*';
    N[3][1] = '0';
    N[3][2] = '#';
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> B[i][j];
        }
    }
    cin >> n;
    for (int k = 0; k < n.length(); k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (n[k] == B[i][j])
                {
                    cout << N[i][j];
                }
                
            }
        }
    }
    
}