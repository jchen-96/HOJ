#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int arr[10000005];

int partion(int l, int r)
{
    srand(time(NULL));
    r = rand()%(r - l + 1) + l;
    swap(arr[r], arr[l]);
    int temp = arr[l];
    int ll = l, rr = r;
    int k;
    for (k = l + 1; k <= rr; k++)
    {
        if (arr[k] < temp)
        {
            swap(arr[k], arr[ll + 1]);
            ll++;
        }
        if (arr[k] > temp)
        {
            swap(arr[k], arr[rr]);
            rr--;
            k--;
        }
    }
    swap(arr[l], arr[k - 1]);
    return ll;
}

int main(int argc, char const *argv[])
{
    int n;
    while (scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int l = 0, r = n - 1;
        int p = partion(l, r);
        while (arr[p] != arr[n / 2])
        {
            if (p < n / 2)
                l = p + 1;
            else
                r = p - 1;
            p = partion(l, r);
        }
        printf("%d", arr[n / 2]);
    }
    return 0;
}
