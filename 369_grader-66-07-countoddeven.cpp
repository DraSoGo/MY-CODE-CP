#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int a,o = 0,e = 0;
    cin >> x;
    while (x != "0")
    {
        a = x[x.length() - 1] - '0';
        if (a % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        cin >> x;
    }
    cout << "Odd:" << o;
    cout << "\nEven:" << e;
}