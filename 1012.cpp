#include <stdio.h>
#include <math.h>
#include <iostream>

//计算自然数目 e  AC

using namespace std;

double arr[10];

void cal(void)
{
    int i;
    double ft, s;
    ft = arr[0] = s = 1.0;
    for (i = 1; i < 10; ++i)
    {
        s *= i;
        arr[i] = 1.0 / double(s) + ft;
        ft = arr[i];
    }
}

int main()
{
    int i;
    cout << "n e" << endl;
    cout << "- -----------" << endl;

    cal();

    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");
    for (i = 3; i < 10; ++i)
        printf("%d %.9f\n", i, arr[i]);

    return 0;
}
