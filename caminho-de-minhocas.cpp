#include <bits/stdc++.h>

using namespace std;


// o problema pede simplesmente pra achar a coluna ou linha com maior soma
// Não precisamos declarar uma matriz
// somaLin e soma Col são vetores que guardam, em cada índice, a soma de todas as células da linha ou coluna de índice correspondente
// fazemos uma comparação normal pra saber qual o maior
// a cada iteração vamos comparando, aí no fim teremos o maior


int n, m, k;
int somaLin[105], somaCol[105], maiorSoma = 0;
    
int main ()
{
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> k;
            somaLin[i] += k;
            somaCol[j] += k;
            if (somaLin[i] > maiorSoma)  maiorSoma = somaLin[i];
            else if (somaCol[j] > maiorSoma) maiorSoma = somaCol[j]; 
        }
    }

    cout << maiorSoma;
    return 0;
}