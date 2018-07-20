#include <iostream>
#include <cstring>
#include <cstdio>
//大数相加 AC

#define MAX_B 1005

using namespace std;

char a[MAX_B], b[MAX_B];
char res[MAX_B];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int n = strlen(a);
        int m = strlen(b);
        n--;
        m--;
        bool bb = false;
        int tt = 0;
        int c_i = 0;
        while (n >= 0 || m >= 0)
        {
            if (n >= 0 && m >= 0)
            {
                int temp = a[n] - '0' + b[m] - '0' + (bb ? 1 : 0);
                tt = temp % 10;
                res[c_i] = tt + '0';
                bb = temp / 10;
                n--;
                m--;
            }
            else if (n >= 0)
            {
                int temp = a[n] - '0' + (bb ? 1 : 0);
                tt = temp % 10 + '0';
                res[c_i] = tt;
                bb = temp / 10;
                n--;
            }
            else
            {
                int temp = b[m] - '0' + (bb ? 1 : 0);
                tt = temp % 10 + '0';
                res[c_i] = tt;
                bb = temp / 10;
                m--;
            }
            c_i++;
        }
        if (bb)
            res[c_i++] = '1';

        // 控制输出部分

        if (i)
            cout << endl;
        cout << "Case " << i + 1 << ":" << endl;
        cout << a << " + " << b << " = ";
        while (res[c_i-1] == '0')
        {
            c_i--;
        }
        if (c_i == 0)
        {
            cout << '0' << endl;
        }
        else
        {
            for (int j = c_i-1; j >= 0; j--)
            {
                cout << res[j];
            }
            cout << endl;
        }
    }
    // getchar();
    return 0;
}
