#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char O;
    
    // Qtd é o número de elementos que nós vamos contar pra calcular a média
    int n = 12, qtd = 0;
    int i, j;   // Sò pra gente não precisar escrever "int" toda vez que declarar um laço for
    
    double m[n][n], soma;
    
    cin >> O;
    
    // Pegar a entrada do problema.
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> m[i][j];
    
    for (i = 1; i < n - 1; i++) // Vamos contar somente as linhas do 1 ao 10
    {  
        if (i < n / 2)  // Vamos o que está acima da diagonal principal, já que estamos "adicionando" no índice da coluna
        {
            for (j = 0; j < i; j++)
            {
                soma += m[i][j];
                qtd++;            // estamos somando na quantidade, porque é o número de elementos da área esquerda
            }
        }
        else        // Vamos o que está acima da diagonal secundária, já que estamos "diminuindo" no índice da coluna
            for (j = 0; j < n - 1 - i; j++)     // Vejam que a coluna segue um padrão, vamos utilizá-lo para fazer o cálculo
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