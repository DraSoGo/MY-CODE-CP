#include <bits/stdc++.h>
using namespace std;
vector <int> N;
int sum = 0,ch = 0,n,k;
void gen(int i)
{
    //cout << sum << "\n";
    if (i < n)
    {
        sum += N[i];
        if (sum == k)
        {
            ch++;
        }
        else if(sum < k)
        {
            gen(i+1);
        }
        sum -= N[i];
        gen(i+1);
    }
}
int main()
{
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        N.push_back(a);
    }
    cin >> k;
    gen(0);
    cout << ch;
}