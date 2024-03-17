#include <bits/stdc++.h>
using namespace std;
int a,n,sum,ch,sumx = 0;
void choc(int i,int N[])
{
    if (i < n)
    {
        sumx += N[i];
        if (sumx == sum)
        {
            ch = 1;
            return;
        }
        else if(sumx < sum)
        {
            choc(i+1,N);
        }
        sumx -= N[i];
        choc(i+1,N);
    }
    
}
int main()
{
    cin >> a;
    while (a--)
    {
        sumx = 0;
        ch = 0;
        cin >> n;
        int N[n];
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> N[i];
            sum += N[i];
        }
        if (sum % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            sum /= 2;
            choc(0,N);
            if (ch == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}