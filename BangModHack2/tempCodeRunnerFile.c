#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[100000];
    scanf("%s",str);
    int cal,sum = 0,pos = strlen(str)-1;
    for (int i = 0; i < strlen(str); i++)
    {
        int xten = pow(100,pos);
        int num = (pos+2)+(2*(str[i]-'A'));
        cal = num*xten;
        sum += cal;
        pos--;
    }
    printf("%d",sum);
}
