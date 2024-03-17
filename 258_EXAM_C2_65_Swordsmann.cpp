#include<bits/stdc++.h>
using namespace std;
struct SW
{
    int atk , def;
    bool operator < (const SW & b)const
    { 
        if(atk != b.atk)
        {
            return atk < b.atk;
        }
        else
        {
            return def < b.def;
        }
    }
};
SW sw[100000];
int n,a = 0; 
int main()
{
    cin >> n;
    for(int i = 0; i < n; i ++ )
    {
        cin >> sw[i].atk >> sw[i].def;
    }
    sort(sw , sw + n);
    int mx = 0;
    for(int i = n - 1; i >= 0; i -- )
    {
        if(sw[i].def > mx)
        {
            a ++;
            mx = sw[i].def;
        }
    }
    cout << a;
    return 0; 
}