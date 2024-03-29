#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3],n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[j];
        }
        sort(A,A+3);
        //cout << A[0]*A[0] << " " << pow(A[1],2) << " " << pow(A[2],2) << "\n";
        if (pow(A[0],2) + pow(A[1],2) == pow(A[2],2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    
}