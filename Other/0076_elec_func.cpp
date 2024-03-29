#include <bits/stdc++.h>
using namespace std;
int elec(int w)
{
    int m = 0;
    for (int i = 1; i <= w; i++)
    {
        if (i <= 300)
        {
            m = m + 9;
        }
        else if (i > 300 && i <= 600)
        {
            m = m + 8;
        }
        else if (i > 600 && i <= 1000)
        {
            m = m + 6;
        }
        else if (i > 1000)
        {
            m = m + 5;
        }
    }
    return m;
}
int main()
{
    int a,b;
    cout << "Customer number : ";
    cin >> a;
    cout << "Watt used : ";
    cin >> b;
    cout << "Electric valve = " << elec(b);
}