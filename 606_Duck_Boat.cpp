#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,co = 0;
    cin >> a >> b;
    int s = 0,e = a-1;
    vector <int> A;
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        A.push_back(c);
    }
    sort(A.begin(),A.end());
    while (e >= s)
    {
        if (A[s] + A[e] <= b)
        {
            co++;
            s++;
            e--;
        }
        else
        {
            co++;
            e--;
        }
    }
    cout << co;
}