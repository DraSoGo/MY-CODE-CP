#include <bits/stdc++.h>
using namespace std;

vector <int> ANS[5002];
vector <int> V;
int c = 1,ch = 0;

int gen(int m,int n)
{
    if (ch == 1)
    {
        return 0;
    }
    if (m == n)
    {
        ANS[c] = V;
        c++;
        if (c > 5001)
        {
            ch = 1;
        }
    }
    else if (m == 0)
    {
        for (int i = 1; i <= 2; i++)
        {
            V.push_back(i);
            gen(m+1,n);
            V.pop_back();
        }
    }
    else
    {
        for (int i = -2; i <= 2; i++)
        {
            V.push_back(i);
            gen(m+1,n);
            V.pop_back();
        }
    }
}

int main()
{
    ANS[0].push_back(0);
    for (int i = 1; i <= 6; i++)
    {
        gen(0,i);
    }
    int n,x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x >= 0)
        {
            for (int i = ANS[x].size()-1; i >= 0; i--)
            {
                cout << ANS[x][i] << " ";
            }
        }
        else
        {
            x = -1*x;
            for (int i = ANS[x].size()-1; i >= 0; i--)
            {
                cout << -1*ANS[x][i] << " ";
            }
        }
        cout << "\n";
    }
}