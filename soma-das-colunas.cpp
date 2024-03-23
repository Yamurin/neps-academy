#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 12, y = 12/
    double matriz[x][y];
    double soma = 0;
    
    int L;
    char T;
    
    cin >> L >> T;
    
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cin >> matriz[i][j];
        }
    }
        
    for(int j = 0; j < y; j++)
        soma += matriz[L][j];
        
    if(T ==  'S')
        cout << soma << endl;
    else if (T == 'M')
        cout << soma / 12 << endl;
    
    return 0;
}