#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float a,sum = 0;
    vector <pair<float,float>> v;
    pair <float,float> z;
    cin >> x >> y;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            z.first = i;
            z.second = j;
            v.push_back(z);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            for (int k = j+1; k < v.size(); k++)
            {
                a = abs((v[i].first*v[j].second)+(v[j].first*v[k].second)+(v[k].first*v[i].second)-(v[i].second*v[j].first)-(v[j].second*v[k].first)-(v[k].second*v[i].first))/2;
                sum += a;

            }
        }
    }
    cout << fixed << setprecision(0) << 2*sum;
}