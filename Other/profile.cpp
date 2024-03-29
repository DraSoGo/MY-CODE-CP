#include <bits/stdc++.h>
using namespace std;
main()
{
    int a,L,W,H,b;
    cin >> L >> a;
    b = 2*a;
    int N[b];
    for(int j = 0;j < 2*a; j++)
    {
        cin >> N[j];
    }
    for (int i = 0; i < 2*a; i = i + 2)
    {
        if(N[i] < L || N[i+1] < L)
        {
            cout << "UPLOAD ANOTHER\n";
        }
        else
        {
            if(N[i] == N[i+1])
            {
                cout << "ACCEPTED\n";
            }
            else
            {
                cout << "CROP IT\n";
            }
        }
    }
}