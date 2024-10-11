#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ch;
    stack <char> st;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ch = 0;
        cin >> a;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == '{' || a[j] == '(' || a[j] == '[')
            {
                st.push(a[j]);
            }
            else
            {
                if (st.empty()) 
                {
                    ch = 1;
                    break;
                }
                char top = st.top();
                st.pop();
                if ((a[j] == ')' && top != '(') || 
                    (a[j] == '}' && top != '{') || 
                    (a[j] == ']' && top != '[')) 
                    {
                        ch = 1;
                        break;
                    }
            }
        }
        if (st.empty())
        {
            cout << "Balanced\n";
        }
        else
        {
            cout << "Not Balanced\n";
        }
    }
}