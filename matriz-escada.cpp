#include <bits/stdc++.h>

using namespace std;

// ler as regras para eles, ignorando o enunciado
// vejam que aqui não importa muito pra gente a parte das clunas, podemos focar somente no requisito de que todos os números antes do primeiro número não nulo precisam ser zeros. Porque dizer isso
// eh o mesmo que falar que as colunas abaixo precisam ser zeros. Então só precisamos conferir uma coisa; se Não há nenhum número zero ANTES do primeiro numero não zero em qualquer linha.
// então não precisamos olhar pra matriz inteira de uma vez, nem testar um milhão de coisas, basta olhar pra cada linha de cada vez, e ver se ela obedece essa rega.
// como esse eh virtualmente o único caso em que a matriz NÃO é escada, a gente só precisa fazer duas coisas no programa:
// identificar qual o primeiro número diferente de zero na linha, uma de cada vez
// identificar se tem algum número não zero antes desse primeiro número. pq se tiver, então não é matriz escada. beleza?

int main ()
{
    int n, m;                   // Dimensões da Matriz.
    bool ehEscada = true;       // Definimos como verdadeiro porque, ao longo do programa, vamos passar a matriz por uma série de testes. Se todos os testes falharem, quer dizer que a matriz é de fato uma escada. 
    int limite = -1;             // Este é o índice da coluna 'limite' até onde precisamos ter zeros na linha. Começamos com -1 para definir que não há limite, que é a configração de um linha completamente preenchida
    
    cin >> n >> m;
    
    for (int x = 0; x < n; x++) {           // Vamos olhar para as linha uma de cada vez.
        int esqNaoZero = m;                 // Primeiro número não zero (ou seja, mais a esquerda). Declaramos como m no caso dessa linha só ter números zero, ou seja, o 'limite' seria atéo final, pq como só temos zeros na linhas, não somos permitidos a ter nenhum numero diferente. Vejam que esse valor vai sendo alterado a mediad que a gente confere cada elemento da matriz, mas ele é resetada a cada nova linha por conta dessa possibilidade da linha ser ocmposta somente de zeros
        for (int y = 0; y < m; y++) {
            int k;
            cin >> k;                       // Lê cada elemento individual da matriz. Repare que, no problema, não precisamos de fato declarar uma matriz.
            
            if (k != 0) {
                if (y <= limite)           // Se o elemento é diferente de zero, mas está antes de outro número não zero, então ele fere aquela regra de que "ter apenas zero a esquerda de números não nulos"
                    ehEscada = false;
                if (esqNaoZero == m)        // Atualiza qual a posição do primeiro nímero diferente de zero encontrado na linha, mas só se nossa variável estiver resetada. isso garante que vamos pegar, realmente, o PRIMEIRO número não zero da linha  
                    esqNaoZero = y;         
            }
            
            limite = esqNaoZero;        // Define o limite como sendo até a coluna do primeiro número não zero encontrado. A partir da próxima linha ( ou seja, próxima iteração do loop), vamos conferir se existem SOMENTE zeros até chegar nesse lmite, obedecendo à regra do problema.
        }
    }
    
    if (ehEscada) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}