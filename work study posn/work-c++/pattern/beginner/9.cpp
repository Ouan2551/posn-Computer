#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n + (n - 1); i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }

        if (i > n)
        {
            for (int j = 1; j <= i-n; j++)
            {
                cout << " ";
            }
            for (int m = n - 1; m >= i-n; m--)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}