#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[1000];
    int num[1000];
    int mx = 0;
    for (int i = 0; i < 1000; i++)
    {
        num[i] = 0;
    }
    scanf("%s",str);
    while (strlen(str) <= 4)
    {
        int pos = strlen(str)-1,cal = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            cal += (str[i] - '0')*pow(10,pos);
            pos--;
        }
        num[cal]++;
        if(cal > mx)
        {
            mx = cal;
        }
        scanf("%s",str);
    }
    for (int i = 0; i < 1000; i++)
    {
        if (num[i] != 0)
        {
            if (i == mx)
            {
                printf("%d",i);
            }
            else
            {
                printf("%d ",i);
            }
        }
    }
}
