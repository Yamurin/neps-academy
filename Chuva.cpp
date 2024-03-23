// Cada mapa é uma matriz quadrada
// A entrada nos dá o tamanho dessas matrizes
// Tudo o que precisamos fazer aqui é uma soma de matrizes
// Vou delcarar as duas matrizes separadamente
// Como o limite é 100, vou colocar a capacidade de 105
// mas no final nós vamos usar só os n números da entrada

// depois de declarar as matrizes, eu vou imprimir uma outra matriz
// cada elemento vai ser a soma do elementos da mesma linha e coluna



#include <bits/stdc++.h>

using namespace std;

int mat1[105][105];
int mat2[105][105];

int main()
{
    int n;
    cin >> n;
    
    for(int lin = 0; lin < n; lin++)
        for(int col = 0; col < n; col++)
            cin >> mat1[lin][col];
            
    for(int lin = 0; lin < n; lin++)
        for(int col = 0; col < n; col++)
            cin >> mat2[lin][col];
    
    for(int lin = 0; lin < n; lin++)
    {
        for(int col = 0; col < n; col++)
        {
            cout << mat1[lin][col] + mat2[lin][col] << " ";
        }
        cout << endl;
    }
    return 0;
}