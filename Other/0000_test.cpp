#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    int A[s.length()];
    for (int i = 0; i < s.length(); i++)
    {
        A[i] = s[i] - 'A' + 'A';
        cout << s[i]-'A'+'A' << " ";
    }
    cout << "\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << A[i]-65 << " ";
    }
    return 0;
}