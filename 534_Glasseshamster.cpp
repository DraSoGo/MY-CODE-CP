#include <bits/stdc++.h>
using namespace std;
string B;
int ch = 0,sum = 0;
void check (vector <int> A,int a,int b)
{
    if (B.length() == A.size())
    {
        for (int i = 0; i < A.size(); i++)
        {
            if (B[i] == '0')
            {
                sum += A[i];
            }
            else
            {
                sum -= A[i];
            }
        }
        if (sum > 0 && b % sum == 0 )
        {
            ch = 1;
        }
        sum = 0;
        
    }
    else
    {
        B += '0';
        check(A,a,b);
        B.erase(B.length()-1,1);
        B += '1';
        check(A,a,b);
        B.erase(B.length()-1,1);
    }
}
int main()
{
    int n,a,b,x;
    cin >> n;
    vector <int> A;
    while (n--)
    {
        cin >> a >> b;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            A.push_back(x);
        }
        check(A,a,b);
        if (ch == 1)
        {
            cout << "Y";
        }
        else
        {
            cout << "N";
        }
        cout << "\n";
        A.clear();
        ch = 0;
    }    
}