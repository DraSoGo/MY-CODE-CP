#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.second < b.second;
    
}
int main()
{
    int a,x = 0,ch = 0;
    cin >> a;
    pair <int,int> A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A,A+a,cmp);
    for (int i = 0; i < a; i++)
    {
        if (A[i].first >= x)
        {
            ch++;
            x = A[i].second;
        }
    }
    cout << ch;
    return 0;
}