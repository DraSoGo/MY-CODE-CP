#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <pair<float,int>> A;
    pair<float,int> b;
    int n,a,x = 1,y,ch;
    float sum;
    cin >> n;
    a = n;
    while (a > 0)
    {
        sum = 0;
        ch = 0;
        for (int i = 0; i < x+4; i++)
        {
            cin >> y;
            sum += y;
            ch++;
            a--;
            if (a <= 0)
            {
                break;
            }
        }
        b.first = sum/ch;
        b.second = x;
        A.push_back(b);
        x++;
    }
    sort(A.begin(),A.end());
    cout << A[A.size() - 2].second << "\n";
    cout << fixed << setprecision(2) << A[A.size() - 2].first;
}