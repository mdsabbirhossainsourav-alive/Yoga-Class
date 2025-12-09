#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if(2*x >= y)
        {
            cout << n*x << endl;
        }
        else
        {
            if(n%2 == 0)
            {
                cout << (n/2)*y << endl;
            }
            else
            {
                cout << (n/2)*y + x << endl;
            }
        }
    }
    return 0;
}