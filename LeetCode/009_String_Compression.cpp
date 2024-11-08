#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars)
    {
        vector <char> sol;
        int co = 0;
        for (int i = 0; i < chars.size(); i++)
        {
            co++;
            if (i+1 >= chars.size() || chars[i+1] != chars[i])
            {
                if (co == 1)
                {
                    sol.push_back(chars[i]);
                    co = 0;
                    // cout << chars[i] << " ";
                }
                else
                {
                    sol.push_back(chars[i]);
                    string num = "";
                    // cout << co << "\n";
                    while (co > 0)
                    {
                        num += (co % 10) + '0';
                        co /= 10;
                    }
                    for (int i = num.size()-1; i >= 0; i--)
                    {
                        sol.push_back(num[i]);
                    }
                    // cout << chars[i] << " " << sol.back() << " ";
                    co = 0;
                }
            }
        }
        for (int i = 0; i < sol.size(); i++)
        {
            chars[i] = sol[i];
        }
        chars.resize(sol.size());
        // cout << "\n";
        return sol.size();
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    int n;
    char x;
    vector <char> V,A;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    cout << so.compress(V);
    return 0;
}