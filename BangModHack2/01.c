#include <stdio.h>
#include <math.h>
int main()
{
    char s[1000];
    int a[6], idx = -1, pos = 0;
    for (int i = 0; i < 6; i++)
    {
        a[i] = 0;
    }
    fgets(s, 1000, stdin);
    for (int i = 1000; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        if (s[i] == '{' || s[i] == '}' || s[i] == ',')
        {
            idx++;
            pos = 0;
            continue;
        }
        else
        {
            a[idx] += (s[i] - '0') * pow(10, pos);
            pos++;
        }
    }
    for (int j = 0; j < 3; j++)
    {
        int mx = -1, mn = 999999, idmx = 0, idmn = 0;
        for (int i = 0; i < 6; i++)
        {
            if (a[i] != -1)
            {
                if (a[i] > mx)
                {
                    idmx = i;
                    mx = a[i];
                }
                if (a[i] < mn)
                {
                    idmn = i;
                    mn = a[i];
                }
            }
        }
        a[idmn] = -1;
        a[idmx] = -1;
        if (j == 2)
        {
            printf("Person %d: %d, %d", j + 1, mn, mx);
        }
        else
        {
            printf("Person %d: %d, %d\n", j + 1, mn, mx);
        }
    }
}