#include <bits/stdc++.h>
using namespace std;

const int N = 7e7;
bitset <N> P; 

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    P[0] = 1;
    P[1] = 1;
    int a,b,t = 0,c = 0,s = 0;
    cin >> a >> b;
    for (int i = 2; i < b+7; i++)
    {
        if (!P[i])
        {
            for (int j = i+i; j < b+7; j+=i)
            {
                P[j] = 1;
            }
        }
    }
    for (int i = a; i <= b; i++)
    {
        !P[i] && (!P[i+2] || (!P[i-2] && i-2 >= 0)) ? t++:t+=0;
        !P[i] && (!P[i+4] || (!P[i-4] && i-2 >= 0)) ? c++:c+=0;
        !P[i] && (!P[i+6] || (!P[i-6] && i-2 >= 0)) ? s++:s+=0;
    }
    cout << t << "\n";
    cout << c << "\n";
    cout << s;
    return 0;
}