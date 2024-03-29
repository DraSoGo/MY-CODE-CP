#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        int q;
        cin >> q;
        vector<pair<string, pair<int, int>>> A;
        while (q--) 
        {
            char c;
            cin >> c;

            if (c == 'a') 
            {
                string s;
                int x, y;
                cin >> s >> x >> y;
                A.push_back({s, {x, y}});
            }

            else if (c == 'b') 
            {
                cout << A.size() << " ";
            }

            else if (c == 'c') 
            {
                for (auto p : A) 
                {
                    cout << p.first << " " << p.second.first << " " << p.second.second << " ";
                }
                cout << "\n";
            }

            else if (c == 'd') 
            {
                sort(A.begin(), A.end(), [](pair<string, pair<int, int>> p1, pair<string, pair<int, int>> p2) 
                {
                    if (p1.second.first == p2.second.first) 
                    {
                        return p1.second.second < p2.second.second;
                    }
                    return p1.second.first < p2.second.first;
                });
            }
        }
    }
    return 0;
}
