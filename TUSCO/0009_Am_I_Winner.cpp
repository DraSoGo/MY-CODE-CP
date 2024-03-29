#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c = 0;
    cin >> a >> b;
    int A[a];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    sort(A,A+a);
    for (int i = 0; i < a; i++)
    {
        if (A[i] >= A[b-1])
        {
            c++;
        }
    }
    cout << c;
}