#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int T1[n],T2[n],t1 = 0,t2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> T1[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> T2[i];
    }
    for(int i = 0; i < n; i++)
    {
        if (T1[i] > T2[i])
        {
            t1 += 2;
        }
        else if (T1[i] < T2[i])
        {
            t2 += 2;
        }
        else if (T1[i] == T2[i])
        {
            t1++;
            t2++;
        }
    }
    if (t1 > t2)
    {
        cout << "Team 1 wins";
    }
    else if (t1 < t2)
    {
        cout << "Team 2 wins";
    }
    else if (t1 == t2)
    {
        cout << "Draw";
    }
    cout << "\n" << t1 << " " << t2;
}