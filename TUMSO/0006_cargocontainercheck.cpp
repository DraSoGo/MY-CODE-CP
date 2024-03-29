#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,A[26] = {10,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28,29,30,31,32,34,35,36,37,38};
    double x[11] = {1,2,4,8,16,32,64,128,256,512,0},sum,sum2;
    string a;
    cin >> n;
    
    while (n--)
    {
        sum = 0;
        cin >> a;
        for (int i = 0; i < 4; i++)
        {
            sum += (A[a[i]-'A']) * x[i];
        }
        for (int i = 4; i < 10; i++)
        {
            sum += (a[i]-'0') * x[i];
        }
        sum2 = floor(sum/11);
        sum2 *= 11;
        int c = abs(sum2 - sum);
        if (c == 10)
        {
            c = 0;
        }
        if (c == a[10] - '0')
        {
            cout << a << "\n";
        }
        
    }
}