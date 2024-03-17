#include <bits/stdc++.h>
using namespace std;
int text(char c,int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << c;
        }
        cout << "\n";
    }
}
int main()
{
    char a;
    int b;
    cout << "Enter character : ";
    cin >> a;
    cout << "Number of line : ";
    cin >> b;
    text(a,b);
    return 0;
}