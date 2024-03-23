// Iniciamos o count -1 para que não dê erro na situação onde Cino acerta de primeira

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cino = 0, count = -1;
    

    while(cino != 2018){
        cin >> cino;
        count++;
    }
    
    cout << count;
    return 0;
}