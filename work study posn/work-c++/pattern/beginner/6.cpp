#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = n; j >= -n+1; j--)
        {
            if (abs(i) == abs(j) || abs(j) <= i)
            {
                cout << "*";
            }
            else if (abs(j) >= i)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}