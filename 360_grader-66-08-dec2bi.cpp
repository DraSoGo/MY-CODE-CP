#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector <int> A;
    cin >> n;
    while (n>0)
    {
        A.push_back(n % 2);
        n /= 2;
    }
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[A.size() - i - 1];
    }
    
}