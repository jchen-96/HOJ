#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    while (N--)
    {
        int cas = 1;
        int x, y;
        while (scanf("%d %d", &x, &y) && (x + y))
        {
            int cnt = 0;
            for (int i = 1; i < x; i++)
            {
                for (int j = i + 1; j < x; j++)
                {
                    if ((i * i + j * j+y) % (i * j) == 0)
                    {
                        cnt++;
                    }
                }
            }
            printf("Case %d: %d\n", cas++, cnt);
        }
        if (N)
            cout << endl;
    }
    return 0;
}
