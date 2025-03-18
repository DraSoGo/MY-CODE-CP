#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,c,x,y,cox = 0,coy = 0;
    char q;
    deque <int> A,B,tmp;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        B.push_back(x);
    }
     while (c--)
     {
        cin >> q;
        if (q == 'B')
        {
            int co = 3;
            while (co--)
            {
                x = A.front();
                cout << x << " ";
                A.pop_front();
                tmp.push_front(x);
            }
            while (!tmp.empty())
            {
                A.push_front(tmp.front());
                tmp.pop_front();
            }
            cout << "\n";
            co = 3;
            while (co--)
            {
                x = B.front();
                cout << x << " ";
                B.pop_front();
                tmp.push_front(x);
            }
            while (!tmp.empty())
            {
                B.push_front(tmp.front());
                tmp.pop_front();
            }
            cout << "\n";
            continue;
        }
        x = A.front();
        y = B.front();
        A.pop_front();
        B.pop_front();
        if (x > y)
        {
            x -= y;
            cox++;
            A.push_front(x);
            B.push_back(y);
        }
        else if (x < y)
        {
            y -= x;
            coy++;
            A.push_back(x);
            B.push_front(y);
        }
        else
        {
            cox++;
            coy++;
            A.push_back(x);
            B.push_back(y);
        }
     }
     cout << cox << " " << coy;
    return 0;
}