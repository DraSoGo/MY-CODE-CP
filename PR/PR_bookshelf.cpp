#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b,c;
    cin >> a;
    vector <int> A;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        A.push_back(b);
    }
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> b;
        cout << A[b - 1] << "\n";
        A.erase(A.begin() + b - 1);
    }
    
}
