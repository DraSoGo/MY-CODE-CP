#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q, n;
    long long x, y;
    string num;
    cin >> q;
    while (q--)
    {
        cin >> n >> x;
        n--;
        while (n--)
        {
            cin >> num;
            long long res = 0;
            for (int i = 0; i < num.length(); i++)
            {
                res = (res * 10 + num[i] - '0') % x;
            }
            cout << res << "\n";
        }
    }
    return 0;
}