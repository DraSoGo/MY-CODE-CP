#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    cin >> b;
    for (int i = 0; i < 1.5*b; i++)
    {
        for (int j = i+1; j <= b; j++)
        {
            for (int k = j+1; k < 1.5*b; k++)
            {
                if (pow(i,2) + pow(j,2) == pow(k,2))
                {
                    cout << i << " " << j << " " << k << "\n";
                }
            }
            
        }
        
    }
    

}