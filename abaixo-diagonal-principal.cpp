#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char O;
    int n = 12;
    int qtd = 0;    // Contador de elementos na área delimitada, para fazermos o cálculo da média.
    double m[n][n], soma = 0;
    
    cin >> O;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];
    
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i - 1; j++)    // Alteramos somente a condição. Mostrar para eles o padrão.
        {
            soma += m[i][j];
            qtd++;
        }
    }
    
    if (O == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    else if (O == 'M')
        cout << fixed << setprecision(1) << soma / qtd << endl;
            
    return 0;
}