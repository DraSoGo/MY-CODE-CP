#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,d = 7,ch = 0,nh = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i % 3 == 0 && nh > ch)
        {
            d++;
        }
        if (a > d)
        {
            ch += d;
            nh = nh + (a - d);
        }
        else if (a <= d)
        {
            ch = ch + a;
        }
        //cout << ch << " " << nh << "\n";
    }
    cout << ch << "\n" << nh;
}