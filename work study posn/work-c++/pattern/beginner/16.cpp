#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        for (int j = -n; j < n+1; j++)
        {
            cout << "(" << i << "," << j << ")";
            // if (abs(i) == abs(j) || abs(i) < abs(j))
            // {
            //     cout << "*";
            // }
            // else
            // {
            //     cout << " ";
            // }
            
        }
        cout << endl;
    }
    return 0;
}