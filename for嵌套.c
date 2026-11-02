#include <stdio.h>

int main()
{
	int a = 0, i = 0, j = 0, k = 0, cnt = 0;
	scanf("%d", &a);
    for (i = a; i <= a+3; i++)
    {
        for (j = a; j <= a+3; j++)
        {
            for (k = a; k <= a+3; k++)
            {
                if (i != j) {
                    if (j != k) {
                        if (i!=k)
                        {
                            cnt++;
                            printf("%d%d%d", i, j, k);
                            if (cnt==6)
                            {
                                printf("\n");
                                cnt = 0;
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                    }
            }
               
            }
           
        }
        
    }
    
    return 0;
}