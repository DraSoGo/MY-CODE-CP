#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 4,X[x+1][x],mxsum = INT_MIN,mxn,sum;
    for (int i = 0; i < x+1; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> X[i][j];
        }
    }    
    for (int i = 0; i < x+1; i++)
    {
        sum = 0;
        for (int j = 0; j < x; j++)
        {
            sum += X[i][j];
        }
        if (sum > mxsum)
        {
            mxsum = sum;
            mxn = i+1;
        }
    }
    cout << mxn << " " << mxsum;
}