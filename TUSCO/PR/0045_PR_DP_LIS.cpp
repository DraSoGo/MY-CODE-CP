#include<bits/stdc++.h>
using namespace std;
int LIS(vector <int> &v)
{
    if (v.size() == 0) 
    {
        return 0;
    }
    vector <int> tail(v.size(),0);
    int length = 1;
    tail[0] = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        auto b = tail.begin(),e = tail.begin() + length;
        auto it = lower_bound(b,e,v[i]);
        if (it == tail.begin() + length)
        {
            tail[length++] = v[i];
        }
        else
        {
            *it = v[i];
        }
    }
    return length;
}
int main()
{
    int a,b,c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        vector <int> v(b);
        for (int j = 0; j < b; j++)
        {
            cin >> v[j];
        }
        cout << LIS(v) << "\n";
        
    }
    return 0;
}