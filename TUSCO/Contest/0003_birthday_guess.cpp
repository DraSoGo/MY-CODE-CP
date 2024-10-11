#include <bits/stdc++.h>
using namespace std;
main()
{
    int a = 0;
    char ch;
    cout << " 1  3  5  7  9\n11 13 15 17 19\n21 23 25 27 29\n31\n";
    cin >> ch;
    if (ch == 'Y')
    {
        a = a + 1;
    }
    cout << " 2  3  6  7  10\n11 14 15 18 19\n22 23 26 27 30\n31\n";
    cin >> ch;
    if (ch == 'Y')
    {
        a = a + 2;
    }
    cout << " 4  5  6  7  12\n13 14 15 20 21\n22 23 28 29 30\n31\n";
    cin >> ch;
    if (ch == 'Y')
    {
        a = a + 4;
    }
    cout << " 8  9 10 11 12\n13 14 15 24 25\n26 27 28 29 30\n31\n";
    cin >> ch;
    if (ch == 'Y')
    {
        a = a + 8;
    }
    cout << "16 17 18 19 20\n21 22 23 24 25\n26 27 28 29 30\n31\n";
    cin >> ch;
    if (ch == 'Y')
    {
        a = a + 16;
    }
    cout << a;
}