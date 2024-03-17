#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    stack <vector<int>> A;
    vector <int> x = {};
    cin >> n;
    A.push(x);
    while (!A.empty())
    {
        if (A.top().size() == n)
        {
            for (int i = 0; i < A.top().size(); i++)
            {
                cout << A.top().at(i);
            }
            cout << "\n";
            A.pop();
        }
        else
        {
            x = A.top();
            A.pop();
            x.push_back(1);
            A.push(x);
            x.pop_back();
            x.push_back(0);
            A.push(x);
            x.pop_back();
        }
    }
}