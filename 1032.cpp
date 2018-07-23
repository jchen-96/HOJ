#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, t, i, max;
    while (~scanf("%d %d", &a, &b))
    {
        cout << a << " " << b << " ";
        if(a>b){
            swap(a, b);
        }
        max = 0;
        for (i = a; i <= b; i++)
        {
            int n = i, sum = 1;
            while (n - 1) //等于1时就结束
            {
                if (n % 2)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                sum++;
            }
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    }

    return 0;
}
