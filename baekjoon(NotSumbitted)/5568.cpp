#include <stdio.h>

int main()
{
    int n, m, sameCount;
    scanf("%d %d", &n, &m);
    int num[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        sameCount = 0;
        for (int j = 0; j < n; ++j)
        {
            if (i != j && num[i] == num[j])
            {
                ++sameCount;
            }
        }
        }
}