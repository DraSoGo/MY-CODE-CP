#include <bits/stdc++.h>
using namespace std;
void showl (list <int> d)
{
    list <int> :: iterator it;
    if (!d.empty())
    {
        for (it = d.begin(); it != d.end(); ++it)
        {
            cout << *it << " ";
        }
    }
    else
    {
        cout << -1;
    }
    cout << "\n";
}
main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m,b;
        int a;
        cin >> m;
        list <int> li;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            if (a == 1)
            {
                cin >> b;
                li.push_back(b);
                showl(li);
            }
            else if (a == 2)
            {
                li.sort();
                showl(li);
            }
            else if (a == 3)
            {
                li.reverse();
                showl(li);
            }
            else if (a == 4)
            {
                cout << li.size() << "\n";
            }
            else if (a == 5)
            {        
                showl(li);
            }
            else if (a == 6)
            {
                li.pop_back();
                showl(li);
            }
            else if (a == 7)
            {
                li.pop_front();
                showl(li);
            }
            else if (a == 8)
            {
                cin >> b;
                li.push_front(b);
                showl(li);
            }
        }
    }
}