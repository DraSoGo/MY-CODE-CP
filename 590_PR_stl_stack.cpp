#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    char m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stack <int> st;
        cin >> b;
        while (b--)
        {
            cin >> m;
            if (m == 'a')
            {
                cin >> a;
                st.push(a);
            }
            else if (m == 'b')
            {
                if (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                else
                {
                    cout << -1;
                }
                cout << " ";
            }
            else if (m == 'c')
            {
                cout << st.size() << " ";
            }
            else if (m == 'd')
            {
                if (!st.empty())
                {
                    cout << st.top();
                }
                else
                {
                    cout << -1;
                }
                cout << " ";
            }
        }
        cout << "\n";
    }
    
}