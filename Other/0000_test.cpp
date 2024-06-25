#include <bits/stdc++.h>
using namespace std;
int main()
{
    int co = 0;
    for (int i = 1000; i < 9999; i++)
    {
        int n = i,sum = 0,ch = 0;
        while (n > 0)
        {
            int s = n%10;
            if (s == 5)
            {
                ch = 1;
            }
            // cout << s << " ";
            sum += s;
            n/=10;
        }
        if (sum == 9 && ch == 1)
        {
            cout << i<< "\n";
            co++;
        }
    }
    cout << co;
    return 0;
}