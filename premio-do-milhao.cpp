#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, soma=0, dias=0, a;
    cin >> n;
    
    while(n--)
    {
        cin >> a;
        if(soma >= 1000000)
            continue;
        soma += a;
        dias++;
    }
    
    cout << dias;
    return 0;
}