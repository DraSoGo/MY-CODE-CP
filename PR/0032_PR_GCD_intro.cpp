#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int sum = 0,N;
    cin >> N;
    for(int i = 1;i < N;i++)
    {
        for(int j = i+1;j <= N;j++)
        {
            sum = sum + __gcd(i,j);
        }
    }
    cout << sum;
}
