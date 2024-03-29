#include <bits/stdc++.h>
using namespace std;
main()
{
    FILE *fo;
    fo = fopen("blank.text","w");
    int a,sum = 0,y = 0;
    while (a != 0)
    {
        cin >> a;
        if (a > 0)
        {
            sum = sum + a;
            fprintf (fo,"CD %d %d\n",a,sum);
        }
        else if (a < 0)
        {
            sum = sum + a;
            fprintf (fo,"CS %d %d\n",a,sum);
        }
    } 
    fclose(fo);
}