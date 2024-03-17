#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <char> st;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            cout << a[i];
        }
        else
        {
            if(st.empty() || st.top() == '(' ||
                (a[i] == '*' && (st.top() == '+' || st.top() == '-')) ||
                (a[i] == '/' && (st.top() == '+' || st.top() == '-')) ||
                (a[i] == '^') ||
                (a[i] == '(')
            )
            {
                st.push(a[i]);
            }
            else if (a[i] == ')')
            {
                while (st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty())
                {
                    if (st.top() == '(')
                    {
                        break;
                    }
                    cout << st.top();
                    st.pop();
                }
                st.push(a[i]);
                //cout << 1 << st.top() << "\n";
            }
        }
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}