#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ch = 0;
    cin >> a >> b;
    int B[b];
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    sort(B,B + b);
    while (a >= 0 && ch < b)
    {
        a = a - B[ch];
        if (a >= 0)
        {
            ch++;
        }
    }
    cout << ch;
}