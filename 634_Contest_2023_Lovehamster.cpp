#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,sum = 0,c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        sum += c;
    }
    if (sum % 3 == 0)
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }
    
}