#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int l = min(n1,n2),r = max(n1,n2);
    while(l != 0)
    {
        int tmp = l;
        l = r % l;
        r = tmp;
    }
    cout << r;
    return 0;
}