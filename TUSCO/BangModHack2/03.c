#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int cal;
    scanf("%s",str);
    char az[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int i = 0; i < strlen(str); i++)
    {
        cal = str[i]-'a';
        cal += 13;
        if (cal > 25)
        {
            cal -= 26;
        }
        printf("%c",az[cal]);
    }
    
}
