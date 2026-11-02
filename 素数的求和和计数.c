#include <stdio.h>

int main(void)
{
    int a = 0;
    int i = 0;
   int cnt = 0;
   int m, n;
   scanf("%d %d", &m, &n);
    
   int sum = 0;
    for (a = m; a<=n; a++)
    {
        if (a==1)
        {
            a== 2;

        }
        int isprime = 1;
        for (i = 2; i < a; i++)
        {

            if (a % i == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 1)
        {
            cnt++;sum+=a;
        }
    }
    printf("%d %d", cnt, sum);
       
    
       
return 0;
}