// 最大连续子数组之和

#include <stdio.h>
int main()
{
    int t, n, maxSum, maxHere, beginMax, endMax, beginHere, endHere;
    int a[100002];
    int max_begin[100002],dp[];
    scanf("%d", &t);
    caseNum = 0;
    for (int i = 0; i < t;i++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        maxSum = -2147483647 - 1;
        maxHere = 0;
        beginMax = 0;
        endMax = 0;
        beginHere = 0;
        endHere = -1;
        for (int i = 0; i < n; i++)
        {
            if (maxHere < 0)
            {
                maxHere = a[i];
                beginHere = i;
                endHere = i;
            }
            else
            {
                maxHere += a[i];
                endHere++;
            }
            if (maxHere > maxSum)
            {
                maxSum = maxHere;
                beginMax = beginHere;
                endMax = endHere;
            }
        }
        printf("Case %d:\n", i+1);
        printf("%d %d %d\n", maxSum, beginMax + 1, endMax + 1);
        if (t)
        {
            printf("\n");
        }
    }
}
