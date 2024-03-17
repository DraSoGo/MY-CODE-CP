#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            st.push(a[i] - '0');
        }
        else
        {
            if (a[i] == '+')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(x+y);
            }
            else if (a[i] == '*')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(x*y);
            }
            else if (a[i] == '-')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y-x);
            }
            else if (a[i] == '/')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y/x);
            }   
        }
    }
    cout << st.top();
}