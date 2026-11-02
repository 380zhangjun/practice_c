#include <stdio.h>
int main()
{
	int i = 0;
	scanf_s("%d", &i);
	int a = 0, b = 0;
	while (i != 0)
    {
        a = i % 10;
        b=b*10+a;
        i /= 10;
    }
    printf("%d\n", b);
    return 0;
}