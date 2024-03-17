#include <bits/stdc++.h>
using namespace std;

char A[1000][1000];
int m,n,k;
int dx[8] = {0,0,1,1,-1,-1,1,-1};
int dy[8] = {1,-1,1,-1,1,-1,0,0};
bool check(int i,int j,string s)
{
    bool ch = false;
    int x,y;
    if (A[i][j] == s[0])
    {
        x = i;
        y = j;
        for (int l = 0; l < 8; l++)
        {
            x = i + dx[l];
            y = j + dy[l];
            for (int h = 1; h < s.size(); h++)
            {
                if (A[x][y] == s[h])
                {
                    ch = true;
                }
                else
                {
                    ch = false;
                    break;
                }
                x += dx[l];
                y += dy[l];
            }
            if (ch == true)
            {
                return true;
            }
        }
        return false;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] >= 'A' && A[i][j] <= 'Z')
            {
                A[i][j] = char(A[i][j] - 'A' + 'a');
            }
            
        }
    }
    cin >> k;
    string s[k];
    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i][j] >= 'A' && s[i][j] <= 'Z')
            {
                s[i][j] = char(s[i][j] - 'A' + 'a');
            }
        }
        
    }
    for (int l = 0; l < k; l++)
    {
        int ch = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (check(i,j,s[l]) == true)
                {
                    cout << i << " " << j << "\n";
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
    return 0;
}