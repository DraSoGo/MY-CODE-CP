#include <bits/stdc++.h>
using namespace std;
vector <int> N;
int ch;
bool check(int k)
{
    int a = k;
    for (int i = 0; i < a; i++)
    {
        if ((N[a] == N[i] || abs(N[a] - N[i]) == abs(a-i)) && N.size() != 1)
        {
            return false;
        }
    }
    return true;
}
void gen(int n)
{
    if (N.size() == n)
    {
        ch = 1;
        cout << "[";
        for (int j = 0; j < N.size(); j++)
        {
            cout << N[j] << " ";
        }
        cout << "] ";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            N.push_back(i);
            if (check(N.size()-1) == true)
            {
                gen(n);
            }
            N.pop_back();
        }
    }
}
int main()
{
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ch = 0;
        N.clear();
        cin >> n;
        gen(n);
        if (ch == 0)
        {
            cout << -1;
        }
        cout << '\n';
    }
    
}