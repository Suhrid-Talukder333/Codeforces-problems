#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (b == 0)
    {
        cout << a;
    }
    else if (b < 0)
    {
        b = b * (-1);
        while (b)
        {
            b--;
            a--;
            if (a < 1)
            {
                a = n;
            }
        }
        cout << a;
    }
    else if (b > 0)
    {
        while (b)
        {
            b--;
            a++;
            if (a > n)
            {
                a = 1;
            }
        }
        cout << a;
    }
}