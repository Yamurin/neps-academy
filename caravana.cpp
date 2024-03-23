#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    
    int v[N];
    int soma = 0, aux = 0;
    
    for(int i = 0; i < N; i++)
    {
        cin >> v[i];
        soma += v[i];
    }
        
    aux = soma / N;
    
   for(int i = 0; i < N; i++)
        cout << aux - v[i] << endl;
        
    return 0;
}