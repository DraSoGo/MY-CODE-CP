#include <bits/stdc++.h>
using namespace std;

vector <int> A;

void genb(int n,int m)
{
    if (n == m)
    {
        for(auto i:A)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    else
    {
        A.push_back(0);
        genb(n,m+1);
        A.pop_back();
        A.push_back(1);
        genb(n,m+1);
        A.pop_back();
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    genb(n,0);
    return 0;
}
/*
INPUT
3
OUTPUT
0 0 0 
0 0 1 
0 1 0 
0 1 1 
1 0 0 
1 0 1 
1 1 0 
1 1 1 
*/