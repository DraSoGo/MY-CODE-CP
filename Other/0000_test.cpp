#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n = 3000000000,j = 0;
    for (int i = 0; i < n; i++)
    {
        j++;
        j--;
    }
    cout << j+1;
}