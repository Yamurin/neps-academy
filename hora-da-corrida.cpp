#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, n, dt;
    cin >> v >> n;
    
    dt = v * n;
    for(float i = 1; i <= 9 ; i++)
        cout << (int)(ceil(dt * (i/10.0))) << " ";
    return 0;
}