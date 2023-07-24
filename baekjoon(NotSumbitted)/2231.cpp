#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, num;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        num = i;
        for (int j = i; j > 0; j /= 10)
        {
            num += j % 10;
        }
        if (n == num)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}