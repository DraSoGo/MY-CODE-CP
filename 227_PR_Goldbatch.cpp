#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,maxn = 300001,ch;
    vector <bool> pm(maxn,true);
    for (int i=3;i<maxn;i+=2)
    {
        if (pm[i])
        {
            for (int j = 2*i;j < maxn;j = j+i)
            {
                pm[j] = false;
            }
        }
    }
    cin >> n;
    for (int i=0;i<n;i++) 
    {
        cin >> p;
        if (p == 4)
        {
            cout << 1 << "\n";
        }
        else 
        {
            ch = 0;
            for (int j = 3;j <= p/2;j = j+2)
            {
                if (pm[j] && pm[p-j])
                {
                    ch++;
                }
            }
            cout << ch << "\n";
        }
    }
    return 0;
}
