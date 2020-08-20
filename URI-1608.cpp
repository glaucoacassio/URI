/*
Exemplo de entrada:
1      //T=1 , indica que terá apenas um caso de teste
10 2 2 //D=10, quantidade de dinheiro , I = 2, existem 2 ingredientes , B = 2 , existem 2 tipos de bolo
3 4    //essa linha contem o preço dos 2(I=2) ingredientes
1 0 2  //essa linha descreve o bolo 1, o primeiro número indica que terá um par (índice do ingrediente, quantidade)
1 1 1  //essa linha descreve o bolo 2, o primeiro número indica que terá um par (índice do ingrediente, quantidade)
Saida do exemplo:
2

Comentário:
O custo de um bolo  é calculado analizando a linha que descreve o bolo, pois é nessa linha que estão os pares (índice do ingrediente, quantidade) que indicam quais ingredientes estão no bolo e em que quantidade.
Entao, para o bolo 1 do exemplo acima, o custo é dado como:
preço do ingrediente 0 * quantidade do ingrediente 0 no bolo = 3 * 2 = 6
E para o bolo 2 o custo é dado como:
preço do ingrediente 1 * quantidade do ingrediente 1 no bolo = 4 * 1 = 4

Logo, com 10 reais (D=10) ela poderá comprar 1 bolo (10/6) do tipo 1 ou 2 bolos (10/4) do tipo 2.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <sstream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int testes, indice, quantidade, bolos, D, I, B;

    scanf("%d", &testes);
    while(testes--)
    {
        scanf("%d %d %d",&D, &I, &B);
        int custo_do_bolo[B];
        vector<int> preco(I); //vetor de precos dos ingredientes
        
        for (int i=0; i<I; i++)
            scanf("%d", &preco[i]);//lendo preco da unidade de cada ingrediente

        //atribuindo zero ao vetor custo_do_bolo
        memset(custo_do_bolo, 0, sizeof(custo_do_bolo));
        for (int j=0; j<B; j++)//lendo a descrição dos bolos
        {
            scanf("%d", &bolos);
            for (int k=0; k<bolos; k++)
            {
                //lendo os pares (índice do ingrediente, quantidade desse ingrediente)
                scanf("%d %d", &indice, &quantidade);
                custo_do_bolo[j] += preco[indice] * quantidade;// calculando o custo
            }
        }

        sort(custo_do_bolo, custo_do_bolo+B);//ordenando para pegar o menor custo
        printf("%d\n", D/custo_do_bolo[0]);//imprimindo a quantidade de bolos, D/custo = quantidade
    }
    return 0;
}