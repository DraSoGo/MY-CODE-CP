#include <bits/stdc++.h>
using namespace std;

int a, b, c, suma = 0;
int s;
vector<int> bc;

void binc(int m, int n, vector<int> N, int sum)
{
    // cout << "hi";
    if (sum > s)
    {
        return;
    }
    if (m == n)
    {
        if (sum > suma)
        {
            suma = sum;
            int co = 0;
            for (int i = 0; i < bc.size(); i++)
            {
                if (bc[i] == 1)
                {
                    co++;
                }
            }
            if (co == 3)
            {
                co = 0;
                for (int i = 0; i < bc.size(); i++)
                {
                    if (bc[i] == 1)
                    {
                        if (co == 0)
                        {
                            a = N[i];
                            co++;
                        }
                        else if (co == 1)
                        {
                            b = N[i];
                            co++;
                        }
                        else if (co == 2)
                        {
                            c = N[i];
                            co++;
                        }
                    }
                }
            }
        }
        return;
    }
    else
    {
        bc.push_back(1);
        binc(m + 1, n, N, sum + N[m]);
        bc.pop_back();
        bc.push_back(0);
        binc(m + 1, n, N, sum);
        bc.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, sum = 0, ch = 0;
    vector<int> N;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        N.push_back(x);
    }
    sort(N.begin(), N.end());
    for (int i = 0; i < 3; i++)
    {
        sum += N[i];
        if (sum > s)
        {
            ch = 1;
            break;
        }
    }
    if (ch == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << 0 << '\n';
        }
    }
    else
    {
        binc(0, n, N, 0);
        cout << a << "\n" << b << "\n" << c;
    }

    return 0;
}