#include <bits/stdc++.h>
using namespace std;
int sum = 0,B[101][101];
vector <int> SUM;
void A(int x,int y)
{
    cout << B[y-1][x-1] << " ";
    sum += B[y-1][x-1];
    if (x == 1 || y == 1)
    {
        SUM.push_back(sum);
        sum = 0;
        cout << "\n---\n";
    }
    else
    {
        x--;
        A(x,y);
        x++;
        y--;
        A(x,y);
        y++;
        // y--;
        // x--;
        // A(x,y);
        // x++;
        // y++;
    }
    
}
int main()
{
    int x,y,k,mx,n;
    cin >> n;
    while(n--)
    {
        cin >> x >> y >> k;
        memset(B,0,sizeof(B));
        mx = -1;
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cin >> B[i][j];
            }
        }
        A(x,y);
        for (int i = 0; i < SUM.size(); i++)
        {
            cout << SUM[i] << " ";
            if (SUM[i] > mx && SUM[i] < k)
            {
                mx = SUM[i];
            }
        }
        cout << "\n";
        SUM.clear();
        cout << mx << "\n";
    }
}