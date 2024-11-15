#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        string decodeString(string s)
        {
            stack <char> st;
            string str,tmp;
            int n,c;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ']')
                {
                    n = 0;
                    c = 1;
                    str = "";
                    while (st.top() != '[')
                    {
                        str += st.top();
                        st.pop();
                    }
                    st.pop();
                    while (!st.empty() && isdigit(st.top()))
                    {
                        n += (st.top() - '0')*c;
                        c *= 10;
                        st.pop();
                    }
                    n--;
                    tmp = str;
                    // cout << str << n << "\n";
                    while (n--)
                    {
                        str += tmp;
                    }
                    // cout << str << "\n";
                    reverse(str.begin(),str.end());
                    for(auto j:str)
                    {
                        st.push(j);
                    }
                }
                else
                {
                    st.push(s[i]);
                }
            }
            str = "";
            while (!st.empty())
            {
                str += st.top();
                st.pop();
            }
            reverse(str.begin(),str.end());
            return str;
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
    cin >> s;
    cout << so.decodeString(s);
    return 0;
}