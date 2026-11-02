#include <stdio.h>

int main(void)
{
    int a = 0;
    int i = 0;
    int isprime = 1;

    if (scanf("%d", &a) != 1)
    {
        return 1;
    }

    if (a < 2)
    {
        isprime = 0;        /* 小于 2 的数不是素数 */
    }
    else
    {
        /* 只需试除到 sqrt(a)，等价写法 i <= a / i */
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }

    /* 判断和输出都在循环之外，只执行一次 */
    if (isprime == 1)
    {
        printf("%d 是素数\n", a);
    }
    else
    {
        printf("%d 不是素数\n", a);
    }

    return 0;
}
