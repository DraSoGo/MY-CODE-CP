#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mn = INT_MAX,sum,y;
    cin >> n;
    int B[2][n];
    vector <pair<int,int>> A;
    pair <int,int> X;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        X.first = B[1][i];
        X.second = B[0][i];
        A.push_back(X);
    }
    sort(A.begin(),A.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A.at(i).first << " ";
    //     cout << A.at(i).second << "\n";
    // }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (A[i].first <= A[j].first)
            {
                sum += A[j].first - A[i].first;
            }
            else
            {
                sum += A[j].first + A[j].second - A[i].first;
            }
            //cout << A[i].first << " " << A[j].first << " " << sum << "\n";
        }
        if (sum < mn)
        {
            mn = sum;
            y = A[i].first;
        }
        
    }
    cout << y << " " << mn;
}