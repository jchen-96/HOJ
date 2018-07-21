#include <iostream>
#include <cstdio>
using namespace std;

//求解两个数的最大公约数，用辗转相除的方法进行求解a>b
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    int step, mod;
    while (cin >> step >> mod)
    {
        printf("%10d%10d    ", step, mod);
        if (gcd(step, mod) == 1)
            printf("Good Choice\n\n");
        else
            printf("Bad Choice\n\n");
    }
    return 0;
}
