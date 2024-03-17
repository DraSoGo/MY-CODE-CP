#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x = 0,sum = 0,a;
    cin >> n;
    deque <int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    while (!A.empty())
    {
        sum += A.front();
        A.pop_front();
        if (A.empty())
        {
            break;
        }
        sum += A.front();
        A.pop_front();
        if (A.empty())
        {
            break;
        }
        sum += A.back();
        A.pop_back();
        if (A.empty())
        {
            break;
        }
        A.pop_back();
        if (A.empty())
        {
            break;
        }
    }
    cout << sum;
}