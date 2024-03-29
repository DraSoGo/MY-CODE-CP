#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int q;
        cin >> q;
        map<int, int> mp;
        while (q--) {
            string a;
            cin >> a;
            if (a == "a") 
            {
                int x, y;
                cin >> x >> y;
                mp[x] = y;
            } 
            else if (a == "b") 
            {
                int x;
                cin >> x;
                if (mp.count(x))
                {
                    cout << mp[x] << " ";
                }
                else
                {
                    cout << "-1 ";
                }
            } 
            else if (a == "c") 
            {
                for (auto p : mp)
                {
                    cout << p.first << " " << p.second << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
