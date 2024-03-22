#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,q;
    cin >> n;
    int A[n],QS1[n],QS2[n];
    memset(QS1,0,sizeof(QS1));
    memset(QS2,0,sizeof(QS2));
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (i == 0)
        {
            if (A[i] >= 0)
            {
                QS2[i] = A[i];
            }
            else
            {
                QS1[i] = A[i];
            }
            
        }
        
    }
    for (int i = 1; i < n; i++)
    {
        if (A[i] >= 0)
        {
            QS2[i] = QS2[i-1] + A[i];
            QS1[i] = QS1[i-1];
        }
        else
        {
            QS1[i] = QS1[i-1] + A[i];
            QS2[i] = QS2[i-1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        QS1[i] = abs(QS1[i]);
    }
    cin >> q;
    while (q--)
    {
        cin >> a >> b;
        a--;
        
        if (a != 0)
        {
            if (b > QS1[n-1]-QS1[a-1])
            {
                // cout << b << " " << QS1[n-1]-QS1[a-1] << " ";
                cout << QS2[n-1]-QS2[a-1] << "\n";
                continue;
            }
            b += QS1[a-1];
            cout << QS2[lower_bound(QS1,QS1+n,b)-QS1]-QS2[a-1];
        }
        else
        {
            if (b > QS1[n-1])
            {
                cout << QS2[n-1] << "\n";
                continue;
            }
            cout << QS2[lower_bound(QS1,QS1+n,b)-QS1];
        }
        cout << "\n";
    }
    
    return 0;
} 