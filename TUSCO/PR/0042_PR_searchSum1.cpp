#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    vector <int> A(a),SUM(a);
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    SUM[0] = A[0];
    for (int i = 1; i < a; i++)
    {
        SUM[i] = A[i] + SUM[i - 1];
    }
    for (int i = 0; i < a; i++)
    {
        SUM[i]--;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        int co = 0;
        cout << lower_bound(SUM.begin(), SUM.end(), c) - SUM.begin() << "\n";
    }
        
}
