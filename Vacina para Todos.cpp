// esse exercício é bem parecidoc om o desafio da caravana

// pra cada posição dessa matriz, nós vamos ler uma quantidade de vacinas
// e toda vez que eu ler, eu já vou ir acompanhando tambpem qual o maior valor a´te o momento
// porque signifca que quando eu acabar de inserir todos os valores, eu já vou saber qual o valor que eu
preciso atingir pra igualar a todas elas
// depois eu vou percorrer a matriz de novo, dessa vez pra olhar pra cada elemento individualmente e ver quanto que ele precisa
pra chegar na mesma quantidade do maior
// pra saber quanto precisa, vou fazer essa diferença entre a maior quantidade que preciso chegar e a quantidade que eu tenho
// essa diferença eu vou chamar de q
/ como eu preciso saber o numero total de vacinas que eu preciso comprar, eu vou sempre somando isso.
// ai depois eu só imprimo esse total


#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int m, n, q = 0, maior = 0; // vamos declarar aqui o m e o nq ue são as diemnsões da matriz
    
    int mat[105][105] = {0};
    
    cin >> n >> m;
    
    for(int lin = 0; lin < n; lin++)
    {
        for(int col = 0; col < m; col++)
        {
            cin >> mat[lin][col];  // pra cada posição dessa matriz, nós vamos ler uma quantidade de vacinas
            
            if(mat[lin][col] > maior)     e toda vez que eu ler, eu já vou ir acompanhando tambpem qual o maior valor a´te o momento
                maior =  mat[lin][col];    porque signifca que quando eu acabar de inserir todos os valores, eu já vou saber qual o valor que eu
						preciso atingir pra igualar a todas elas
        }
    }
    
    for(int lin = 0; lin < n; lin++)
        for(int col = 0; col < m; col++)
            q += maior - mat[lin][col];
    
    cout << q;
    
    return 0;
}
