#include <bits/stdc++.h>
using namespace std;

int HS(string d,string t)
{
    int hv = 0;
    for (int i = 0; i < d.size(); i++)
    {
        hv += d[i];
        hv %= 1000000000+7;
    }
    for (int i = 0; i < t.size(); i++)
    {
        hv += t[i];
        hv %= 1000000000+7;
    }
    return hv;
}

int main()
{
    int n,h;
    string d,t;
    cin >> n;
    vector <int> H;
    H.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> d >> t;
        H.push_back(HS(d,t));
        cout << "Block " << i+1 << ":\n";
        cout << "Data: " << d << "\n";
        cout << "Timestamp: " << t << "\n";
        cout << "Hash: " << H[i+1] << "\n";
        cout << "Previous hash: " << H[i] << "\n";
    }
}