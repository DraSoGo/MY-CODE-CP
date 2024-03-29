#include <iostream>
using namespace std;
int main()
{
    long long n,sum = 0,i = 1;
    cin >> n;
    while (n >= 0)
    {
        n = n - i;
        i++;
        //cout << n << "\n";
        sum++;
    }
    cout << sum-1;
}