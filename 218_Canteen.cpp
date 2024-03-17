#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,a;
    cin >> n;
    queue <int> A[1000];
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> a;
        if (a == 1)
        {
            cin >> x >> y;
            A[y].push(x);
        }
        else if (a == 2)
        {
            cin >> y;
            A[y].pop();
        }
        else if (a == 3)
        {
            cin >> y;
            if (!A[y].empty())
            {
                cout << A[y].front();
            }
            else
            {
                cout << -1;
            }
            cout << "\n";
        }
        else if (a == 4)
        {
            cin >> y;
            cout << A[y].size();
            cout << "\n";
        }
    }
}