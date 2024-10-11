#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 0,y = 7,co = 0;
    for (int i = 0; i < 11; i++)
    {
        double x;
        cin >> x;
        cout << (x-y)*(x-y) << "\n";
        co += (x-y)*(x-y);
        c += x;
    }
    cout << co << "\n";
    cout << c << "\n";
}