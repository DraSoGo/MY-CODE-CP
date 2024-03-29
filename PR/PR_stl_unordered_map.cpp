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
        unordered_map <int, int> mp;
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
                cout << mp.size() << " ";
            }
            else if (a == "d") 
            {
                int x;
                cin >> x;
                mp.erase(x);
            }
        }
        cout << "\n";
    }
    return 0;
}
