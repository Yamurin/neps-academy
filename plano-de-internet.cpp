#include <bits/stdc++.h>
using namespace std;

int main()
{
    int quota, meses, consumo, resposta=0;
    cin >> quota >> meses;
    for (int i=0; i<meses; i++)
    {
        cin >> consumo;
        resposta += quota-consumo; 
    }
    
    cout << resposta+quota;
    return 0;
}