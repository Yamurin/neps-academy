// Atenção: Tirar tudo o que não estiver dentro do intervalo 0-100, usando operador modulo
// Você não precisa utilizar uma variável "resposta", e pode só ir alterando v. Porémfiz uma variável resp pra ficar mais legível.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, a, resp;
    cin >> v >> t;
    resp = v;
    
    while(t--)
    {
        cin >> a;
        resp += a;
        
        if(resp < 0 || resp > 100)
            resp -= resp % 100;
    }
    
    cout << resp;
    return 0;
}