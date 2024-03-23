#include <bits/stdc++.h>
using namespace std;

int n, cartas[14], cont_a=0, cont_b=0, a[3], b[3], pontos_a=0, pontos_b=0;

int main()
{
    
    cartas[5] = 1;
    cartas[6] = 2;
    cartas[7] = 3;
    cartas[12] = 4;
    cartas[11] = 5;
    cartas[13] = 6;
    cartas[1] = 7;
    cartas[2] = 8;
    cartas[3] = 9;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) // Numero de partidas com três jogadas cada
    {
        cont_a = 0;
        cont_b = 0;
        
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
        
        for(int j = 0; j < 3; j++) // Cada jogada com seis cartas cada
        {
            if(cartas[ a[j] ] >= cartas[ b[j] ]) cont_a++;
            else cont_b++;
        }
        
        if(cont_a > cont_b) pontos_a++;
        else pontos_b++;
    }
    
    cout << pontos_a << " " << pontos_b;
    
    return 0;
}