#include <iostream>
#include <cstring>

//大数相加 WA

#define MAX_B 1005

using namespace std;

char a[MAX_B], b[MAX_B];
char res[MAX_B];

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int n = strlen(a);
        int m = strlen(b);
        int n_1 = n - 1, m_1 = m - 1;
        bool bb = false;
        int tt = 0;
        int c_i = 0;
        while (n_1 >= 0 || m_1 >= 0)
        {
            if (n_1 >= 0 && m_1 >= 0)
            {
                int temp = a[n_1] - '0' + b[m_1] - '0' + (bb ? 1 : 0);
                tt = temp % 10;
                res[c_i] = tt+'0';
                bb = temp / 10;
                n_1--;
                m_1--;
            }
            else if (n_1 >= 0)
            {
                int temp = a[n_1] - '0' + (bb ? 1 : 0);
                tt = temp % 10+'0';
                res[c_i] = tt;
                bb = temp / 10;
                n_1--;
            }
            else
            {
                int temp = b[m_1] - '0' + (bb ? 1 : 0);
                tt = temp %10 +'0';
                res[c_i] = tt;
                bb = temp / 10;
                m_1--;
            }
            c_i++;
        }
        if(bb)
            res[c_i] = '1';

        if(i)
            cout << endl;
        cout << "Case " << i+1 <<":"<< endl;
        cout << a << " + " << b << " = ";
        for (int j = c_i; j >= 0;j--){
            cout << res[j];
        }
        cout << endl;
    }
    // getchar();
    return 0;
}
