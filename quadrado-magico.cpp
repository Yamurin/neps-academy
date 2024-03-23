#include <bits/stdc++.h>
using namespace std;

    int matriz[3][3];
    int somaDiagPrin, somaDiagSec;
    int somaLin[3], somaCol[3]; // Cada índice desses vetores vai armazenar a soma da linha e coluna correspondontes
    
int main ()
{
    // Armazenar a entrada do problema
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];
    
    // Percorrer a matriz novamente, fazendo todas as operações básicas        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            somaLin[i] += matriz[i][j];
            somaCol[j] += matriz[i][j];  
            
            if (i == j)
                somaDiagPrin += matriz[i][j];
            if (j == 3 - i - 1)   
                somaDiagSec += matriz[i][j];
        }
    }
    
    // Fazendo a comparação da soma de cada linha e coluna
    // O programa já retorna "NAO" logo que encontra uma diferença
    for (int i = 0; i < 3; i++)
    {
        if(somaLin[i] != somaDiagPrin ||
           somaCol[i] != somaDiagPrin)
          {
              cout << "NÃO";
              return 0;
          }
    }
    
    if(somaDiagPrin == somaDiagSec)
        cout << "SIM";
    else
        cout << "NÃO";
        
    return 0;
}