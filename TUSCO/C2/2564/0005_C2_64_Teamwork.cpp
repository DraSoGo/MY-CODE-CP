#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,a;
    double sum = 0;
    cin >> m >> n;
    long long i = m;
    vector <long long> A[m];
    priority_queue <int,vector <int>,greater<int>> B;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        B.push(a);
    }
    while (!B.empty())
    {
        a = B.top();
        B.pop();
        A[i%m].push_back(a);
        i++;
    }
    for (int i = 0; i < m; i++)
    {
        sum += A[i][0];
        for (int j = 1; j < A[i].size(); j++)
        {
            A[i][j] += A[i][j-1];
            sum += A[i][j];
        }
    }
    cout << fixed << setprecision(3) << sum/n;
    
}