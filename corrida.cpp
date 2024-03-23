#include <bits/stdc++.h>
using namespace std;

// Então vamos ter dois carros
// Cada carro tem um número, a sua distância até o final, e a sua velocidade
// Então vamos começar declarando esses valores e já pegando eles como entrada
// E como eu preciso saber qual vai ser o carro vencedor, quer dizer que eu preciso achar aquele que chegou em menos tempo
// Então eu vou declarar também um double pro tempo que cada um levou

	int n1, n2, d1, d2, v1, v2;
    	double t1, t2;
	cin >> n1 >> d1 >> v1;
    	cin >> n2 >> d2 >> v2;
    
// Vamos voltar aqui no exemplo pra observar como é que esses carros se movem
// Aqui, o Carro 1 tem código 45, ele está a 900 m do final, e anda a 40 km / h
// Então nesse caso, pensa comigo:
// Ele precisa andar 900 m
// Se ele precisace andar 40 km, então gastaria 1 hora
// Então ficara 40km - 60
// Mas como a entrada é a distância em metros, vamos olhar pra esse problema usando metros por segundo na cabeça
// 40 000 - 60
// Mas a gente não precisa percorrer 40000 metros pra chegar no final, só 900
// Então fazemos uma regra de três

40 000 - 60
900 - x

Que vai dar
40 000 x = 900 * 60

// Aí como a gente passa dividindo, fica a mesma coisa que 900 * 60 /  40 000 
// O resultado é 1,35. esse é o tempo, em minutos, que o carro 1 levou pra percorrer 900m
// Vamo fazer a mesma conta pro debaixo, 300 * 60 / 20 000
// Deu 0,9. Então o Carro 2 foi mais rápido que o carro 1
// Então a gente imprime o código do vencedor, que nesse caso é 17

// Com essa continha, a gente descobre quanto tempo o carro gastou
// Aí reparem que esses são os valores, respectivamente, da distância que nos deram, 
por uma constante que a gente achou, que é o 60, e no fim a velocidade (que também nos dão no problema)

// Agora fica tranquilo, é só fazer um código que usa essas variáveis pra calcular o tempo do nosso carro
// Como nós temos dois carros que precisam ver qual é o mais rápido,  vamos fazer a mesma conta pra ambos

  t1 = ((d1 * 60.0) / v1);
   t2 = ((d2 * 60.0) / v2);

// Mas reparem que eu coloquei a velocidade em km mesmo. Isso porque não importa o tempo exato que cada um gastou, 
só importa saber qual foi menor, e já resolve o problema. Por isso eu vou deixar essa conversão de lado.

//  Agora a gente imprime na tela qual o mais rápido
// Vou começar vendo se o segundo é mais rápido que o primeiro. Se não, eu mostro o primeiro
if(t2 < t1) cout << n2;
    else cout << n1;
// E o return 0

int main()
{

    int n1, n2, d1, d2, v1, v2;
    double t1, t2;
    
    cin >> n1 >> d1 >> v1;
    cin >> n2 >> d2 >> v2;
    
    t1 = ((d1 * 60.0) / (v1 * 1000));
    t2 = ((d2 * 60.0) / (v2 * 1000));
    
    if(t2 < t1) cout << n2;
    else cout << n1;
    return 0;
}