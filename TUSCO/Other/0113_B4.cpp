#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,w,x,y,z;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&w);
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        for (int i = 0; i < z; i++)
        {
            if ((w*i*i) + (x*i) + y >= z)
            {
                printf("%d\n",i);
                break;
            }
            
        }
        
    }
    
    return 0;
}