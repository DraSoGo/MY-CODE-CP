#include <bits/stdc++.h>
using namespace std;
main()
{
    char a[99999];
    int i = 0;
    char *pa;
    cin.getline(a,99999);
    pa = &a[i];
    while (*pa != '\0')
    {
        pa = &a[i];
        i++;
    }
    cout << i - 1;
}