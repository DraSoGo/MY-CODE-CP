#include <bits/stdc++.h>
using namespace std;

int T[4001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int w,h,n,x,a,p5 = 0,p10 = 0;
    memset(T,0,sizeof(T));
    cin >> w >> h >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> a;
        for (int j = 0; j < a; j++)
        {
            T[x+j]++;
        }
    }
    for (int i = 0; i < w; i++)
    {
        if (T[i] == 0)
        {
            p10++;
        }
        else if (T[i] == 1)
        {
            p5++;
        }
    }
    cout << p10*h << " " << p5*h;
    return 0;
}