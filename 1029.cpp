#include <iostream>
#include <algorithm>
#include <cstdio>

// ~scanf(读到文件结尾)

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    while (~scanf("%d", &n))
    {

        int v;
        cin >> v;
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            int tt;
            cin >> tt;
            if (cnt == 0)
            {
                v = tt;
                cnt++;
                continue;
            }
            if (v == tt)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        printf("%d\n", v);
    }
    return 0;
}
