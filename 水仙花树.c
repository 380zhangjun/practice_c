#include <stdio.h>
int main()
{
    int n = 0;
    
    n = 3;int i = 1;int j = 1;
   /* for (i = 1; i < n; i++)
    {
        j *= 10;      遍历100-999
    }*/
    for ( i=j; i < 10*j; i++)
    {
        int m = i;
        int sum = 0;
        while (m != 0) {
           /* int p = 0;
            p = m % 10;int a = 0;int b = p;        找到m的每一位
            m /= 10;*/
           /* for (a = 1; a < n; a++)
            {
                b *= p;       求m的每一位的n次方
            }sum += b;*/
        }/*if (sum == i)
        {
            printf("%d\n", i);    判断i是否为水仙花数
        }*/

    }
    return 0;
}