#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int A[10000];
    for (int i = 0; i < 10000; i++)
    {
        A[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        int s,e;
        cin >> s >> e;
        while (s != e)
        {
            A[e]++;
            e--;
        }
    }
    sort(A,A + 10000);
    cout << A[9999];
    return 0;
}