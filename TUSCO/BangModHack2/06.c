#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int isv(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (!isdigit(str[i]) && str[i] != '.')
        {
            return 0;
        }
    }
    return 1;
}
double cal(double M, double R)
{
    return (M * M * M) / (R * R * 10000);
}

int main()
{
    int n;
    char STR[n][51];
    scanf("%d", &n);
    float(A[n]);
    if (n <= 0 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        char stn[51];
        char Mstr[51], Rstr[51];
        double M, R;
        scanf("%s %s %s", stn, Mstr, Rstr);
        if (strlen(stn) > 50 || !isv(Mstr) || !isv(Rstr))
        {
            printf("Invalid input");
            return 0;
            continue;
        }
        M = atof(Mstr);
        R = atof(Rstr);
        double L = cal(M, R);
        A[i] = L;
        for (int j = 0; j < strlen(stn); j++)
        {
            STR[i][j] = stn[j];
        }
        
        // printf("%s %.2f\n", stn, L);
    }
    int idmx = 0;
    float mx = -1.0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > mx)
        {
            idmx = i;
            mx = A[i];
        }
    }
    printf("Invalid input");
    
    
    return 0;
}
