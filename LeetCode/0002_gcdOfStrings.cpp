#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        queue <char> s1,s2,pat1,pat2;
        string ans = "",as1 = "",as2 = "";
        for (int i = 0; i < str1.size(); i++)
        {
            s1.push(str1[i]);
            pat1.push(str1[i]);
        }
        for (int i = 0; i < str2.size(); i++)
        {
            s2.push(str2[i]);
            pat2.push(str2[i]);
        }
        for (int i = 0; i < min(str1.size(),str2.size()); i++)
        {
            pat1.push(pat1.front());
            as1 += pat1.front();
            pat1.pop();
            pat2.push(pat2.front());
            as2 += pat2.front();
            pat2.pop();
            if (str2.size() % as2.size() == 0 && str1.size() % as1.size() == 0 && pat1 == s1 && pat2 == s2 && as1 == as2)
            {
                ans = as1;
            }
        }
        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Solution so;
    string a,b;
    cin >> a >> b;
    cout << so.gcdOfStrings(a,b);
    return 0;
}