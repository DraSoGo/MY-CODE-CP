#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2*a-1; j++)
        {
            if (j > a-i-2 && j < (2*a-1) - (a-i-2) - 1)
            {
                if (j-(a-i-2) > i+1)
                {
                    //cout << "*";
                    cout << ((i+1) - ((j-(a-i-2)) % (i+1)))%10;
                }
                else
                {
                    cout << (j-(a-i-2))%10;
                }
                
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << "\n";
    }
    
}