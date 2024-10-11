#include<stdio.h>
#include<stdlib.h>
long double fib[1001];
int main()
{

    int n;
    scanf("%d", &n);

    if(n < 1) {
        printf("ERROR");
        return 0;
    }
    printf("0 ");
    fib[1] = fib[2] = 1;
    for(int i = 3; i < n + 1; i++){
        fib[i] = fib[i - 1] + fib[i - 2];

    }

    for(int i = 1; i < n-1; i++) printf("%.0Lf ", fib[i]);
    printf("%.0Lf", fib[n-1]);

    return 0;
}

