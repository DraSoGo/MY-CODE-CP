#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector<int> asteroidCollision(vector<int> &asteroids)
        {
            bool ch;
            stack <int> A;
            vector <int> ANS;
            for (int i = 0; i < asteroids.size(); i++)
            {
                ch = 1;
                // if (!A.empty())
                // {
                //     cout << asteroids[i] << " " << A.top() << "\n";
                // }
                
                while (!A.empty() && (asteroids[i] < 0 && A.top() > 0) && (abs(asteroids[i]) >= abs(A.top())))
                {
                    if (abs(asteroids[i]) == abs(A.top()))
                    {
                        A.pop();
                        ch = 0;
                        break;
                    }
                    A.pop();
                }
                if ((A.empty() || (asteroids[i] > 0 && A.top() < 0) || (asteroids[i] > 0 && A.top() > 0) || (asteroids[i] < 0 && A.top() < 0)) && ch == 1)
                {
                    A.push(asteroids[i]);
                }
            }
            while (!A.empty())
            {
                ANS.push_back(A.top());
                A.pop();
            }
            reverse(ANS.begin(),ANS.end());
            return ANS;
        }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Solution so;
    int n, k;
    string s;
    int x;
    cin >> n;
    vector<int> V, A;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        V.push_back(x);
    }
    vector <int> B = so.asteroidCollision(V);
    for(auto i:B)
    {
        cout << i << " ";
    }
    return 0;
}