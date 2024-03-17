#include <bits/stdc++.h>
using namespace std;
int main()
{
    char A[80][80];
    memset(A,' ',sizeof(A));
    int sp[4][2] = {{-1,-1},{1,-1},{1,1},{-1,1}},x = 40,y = 40,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            A[y][x] = (char)219;
            y += sp[i % 4][0];
            x += sp[i % 4][1];
        }
    }
    for (int i = 0; i < 80; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            cout << A[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}