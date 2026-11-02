#include <stdio.h>

int main(void)
{
    int a = 0;
    int i = 0;
   int cnt = 0;

    a = 2;
    while(cnt<50){
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
            printf("%d\t", a);cnt++;
        }

        a++;
    }
       
return 0;
}