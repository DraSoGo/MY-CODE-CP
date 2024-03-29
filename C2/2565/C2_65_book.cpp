#include <bits/stdc++.h>
using namespace std;

vector <int> bc;
int co = 0;

void bcount(int n,int m,string b)
{
    string c;
    if (m == n)
    {
        for (int i = 0; i < bc.size(); i++)
        {
            if (bc[i] == 1)
            {
                //cout << b[i];
                c += b[i];
            }
        }
        for (int i = 1; i < c.size(); i++)
        {
            int x,y;
            if (c[i] >= '0' && c[i] <= '9')
            {
                x = c[i] - '0';
            }
            else
            {
                x = c[i] - 'A';
            }
            if (c[i - 1] >= '0' && c[i - 1] <= '9')
            {
                y = c[i - 1] - '0';
            }
            else
            {
                y = c[i - 1] - 'A';
            }
            if (abs(x-y) == 1)
            {
                return;
            }
        }
        co++;
        //cout << c << "\n";
    }
    else
    {
        bc.push_back(0);
        bcount(n,m+1,b);
        bc.pop_back();
        bc.push_back(1);
        bcount(n,m+1,b);
        bc.pop_back();
    }
}

int main()
{
    string a,b;
    int A[37];
    memset(A,0,sizeof(A));
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            if (A[a[i] - '0'] == 0)
            {
                b += a[i];
                A[a[i] - '0'] = 1;
            }
        }
        else
        {
            if (A[(a[i] - 'A') + 10] == 0)
            {
                b += a[i];
                A[(a[i] - 'A') + 10] = 1;
            }
        }
    }
    sort(b.begin(),b.end());
    bcount(b.length(),0,b);
    cout << co-1;
}