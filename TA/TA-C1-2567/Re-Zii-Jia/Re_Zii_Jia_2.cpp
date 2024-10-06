#include <bits/stdc++.h>
using namespace std;

stack<pair<long long, long long>> m, re;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, a, b, c, d, x, y;
    cin >> n >> a >> b;
    c = a, d = b;
    for (long long i = 0; i < n; i++)
    {
        string com;
        cin >> com;

        if (com == "MV")
        {
            cin >> x >> y;
            m.push({x, y});
            a += x, b += y;
        }
        else if (com == "RE")
        {
            if (m.empty())
                continue;
            a -= m.top().first, b -= m.top().second;
            re.push(m.top());
            m.pop();
        }
        else
        {
            if (re.empty())
            {
                while (!m.empty())
                {
                    m.pop();
                }
                a = c;
                b = d;
                continue;
            }
            a += re.top().first, b += re.top().second;
            m.push(re.top());
            re.pop();
        }
    }

    cout << fixed << setprecision(2) << sqrt(double(a - c) * (a - c) + double(b - d) * (b - d)) << '\n';
    cout << fixed << setprecision(0) << a << ' ' << b;
    return 0;
}