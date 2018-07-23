#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_n 1005

int arr[MAX_n];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int N;
        scanf("%d", &N);
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
        }
        sort(arr, arr + N);
        for (int j = 0; j < N; j++)
        {
            if(j)
                printf(" ");
            printf("%d", arr[j]);
        }
        printf("\n");
    }
    return 0;
}
