#include <stdio.h>
#include <stdbool.h>

int main()
{
    int nan[9];
    int nanSum = 0, twoNan;
    bool find = false;
    for (int i = 0; i < 9; ++i)
    {
        scanf("%d", &nan[i]);
        nanSum += nan[i];
    }
    for (int i = 0; i < 9; ++i)
    {
        for (int j = i + 1; j < 9; ++j)
        {
            twoNan = nan[i];
            twoNan += nan[j];
            if (nanSum - twoNan == 100)
            {
                nan[i] = nan[j] = 0;
                find = true;
                break;
            }
        }
        if (find)
        {
            break;
        }
    }
    for (int i = 0; i < 9; ++i)
    {
        for (int j = i + 1; j < 9; ++j)
        {
            if (nan[i] > nan[j])
            {
                nan[i] = nan[j] ^ nan[i];
                nan[j] = nan[i] ^ nan[j];
                nan[i] = nan[j] ^ nan[i];
            }
        }
    }
    for (int i = 2; i < 9; ++i)
    {
        printf("%d\n", nan[i]);
    }
}