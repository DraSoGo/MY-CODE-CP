#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a,b;
    cin >> a;
    b = a;
    next_permutation(a.begin(),a.end());
    if (b < a)
    {
        cout << a;
    }
    else
    {
        cout << "No Successor";
    }
    prev_permutation(a.begin(),a.end());
}