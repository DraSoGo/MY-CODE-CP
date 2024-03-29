#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,x,n;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> a >> b >> c;
        vector <pair<int,int>> V;
        pair <int,int> data;
        n = 0;
        e = a;
        x = 1;
        data.first = x;
        data.second = a;
        V.push_back(data);
        while(2*x <= b)
        {
            a = a * a;
            x = x*2;
            a = a % c;
            data.first = x;
            data.second = a;
            V.push_back(data);
            n++;
        }
        while (x < b)
        {
            for (int j = n; j >= 0; j--)
            {
                if (x + V[j].first <= b)
                {
                    a = a * V[j].second;
                    a = a % c;
                    x += V[j].first;
                    if (x + V[j].first > b)
                    {
                        n--;
                    }
                    break;
                }
                else
                {
                    n--;
                }
            }
            // cout << x << " " << n << "\n";
        }
        cout << a << "\n";
        // for (int i = 0; i < V.size(); i++)
        // {
        //     cout << V[i].first << " " << V[i].second;
        //     cout << "\n";
        // }
    }
}