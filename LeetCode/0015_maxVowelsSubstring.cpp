#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
        Solution()
        {
            ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        }
        int maxVowels(string s, int k)
        {
            int sum = 0,mx;
            for (int i = 0; i < k; i++)
            {
                if (s[i] == 'a' || s[i] == 'o' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u')

                {
                    sum++;
                }
            }
            mx = sum;
            for (int i = 1; i+k-1 < s.size(); i++)
            {
                if (s[i-1] == 'a' || s[i-1] == 'o' || s[i-1] == 'i' || s[i-1] == 'e' || s[i-1] == 'u')
                {
                    sum--;
                }
                if (s[i+k-1] == 'a' || s[i+k-1] == 'o' || s[i+k-1] == 'i' || s[i+k-1] == 'e' || s[i+k-1] == 'u')
                {
                    sum++;
                }
                mx = max(mx,sum);
            }
            return mx;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, k;
    string s;
    int x;
    vector<int> V, A;
    cin >> s >> k;
    cout << so.maxVowels(s, k);
    return 0;
}