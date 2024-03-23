#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int tmp;
    int j[4];	
    // fazer com 3 elementos primeiros pra mostrar pra eles o erro 
    cin >> j[1] >> j[2] >> j[3];
    int area;
    sort(j, j+ 3);
    
    if (j[3] - j[1] <= 200) { // f1 f3 sobrepostos
        area = 100 * (j[1] + 400 - j[3]));
        
    } else if (j[2] - j[1] <= 200 && j[3] - j[2] <= 200) { //f1 f2 sobrepostos de um lado e f2 f3 sobrepostos de outro
       area = 100 * (j[1] + 400 - j[3]));
       
    } else if (j[2] - j[1] <= 200 && j[3] - j[2] > 200) { // f1 f2 sobrespostos, mas f2 f3 separados
        area = 100 * (j[1] + 200 - j[2]));
        
    } else if (j[2] - j[1] > 200 && j[3] - j[2] <= 200) { // f1 f2 separados, mas f2 f3 sobrepostos
        area = 100 * (j[2] + 200 - j[3]));
        
    } else {
        area = 0;
}
}
