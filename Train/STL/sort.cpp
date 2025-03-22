#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    for(int i=0;i<v.size();i++)cout << v[i] << ' ';
    cout << "\n";
    sort(v.begin(),v.end(),greater<int>());
    for(int i:v)cout << i << ' ';
    
    return 0;
}