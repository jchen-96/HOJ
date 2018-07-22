#include <stdio.h>
// 找规律，从第三个开始，每四个为一组
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        if ((n - 2) % 4 != 0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
