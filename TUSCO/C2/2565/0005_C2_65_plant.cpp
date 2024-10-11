#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,ch;
    cin >> n;
    vector <pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        ch = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (y == v[j].second &&  x == v[j].first)
            {
                ch = 1;
                break;
            }
            else if(y < v[j].second)
            {
                if (x >= v[j].first-(v[j].second-y) && x <= v[j].first+(v[j].second-y))
                {
                    ch = 1;
                    break;
                }
            }
        }
        for (int j = 0; j < v.size(); j++)
        {
            if (y > v[j].second && ch == 0)
            {
                if (v[j].first >= x-(y-v[j].second) && v[j].first <= x+(y-v[j].second))
                {
                    v.erase(v.begin()+j);
                }
                
            }
        }
        if (ch == 0)
        {
            v.push_back({x,y});
        }
    }
    cout << v.size();
}