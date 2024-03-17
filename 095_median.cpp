    //this is sorting min--->max without pointers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A,A+n);
    if (n % 2 == 0)
    {
        float p = ((A[((n/2))-1] + A[(n/2)])/2.0);
        cout << fixed << setprecision(1) << p ;
    }
    else
    {
        float e = (A[((n+1)/2)-1]);
        cout << fixed << setprecision(1) << e ;
    }
    return 0;
}