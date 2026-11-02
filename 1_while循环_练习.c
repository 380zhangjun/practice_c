#include <stdio.h>
int main()
//最大公因数
{
	int a = 0;int b = 0;int c = 0;
	scanf_s("%d %d",&a,&b);
	while (b!=0)
	{
		c = a % b;
		a = b;
		b = c;

	}printf("%d", a);
	return 0;
}