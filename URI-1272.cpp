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
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) 
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
	char texto[52], resultado[52], lixo;
	unsigned short i, j;
	unsigned casos;

	scanf("%u", &casos);
    getchar();

	while (casos--)
	{
		
		scanf("%[^\n]", texto);
		scanf("%c", &lixo); // Trata o buffer do scanf anteior;
	
		i = 0;
		j = 0;

		// Laço dura até que o caractere nulo seja alcançado;
		while (texto[i])
		{

			// Se o caractere no índice atual for um espaço, simplesmente avançe;
			if (texto[i] == ' ')
				i++;
	
			else
			{	
				// Caso contrário, será uma letra
				// Então coloque essa letra na string resultado;
				resultado[j++] = texto[i++];

				// Enquanto os próximos caracteres também forem letras, apenas avançe;
				// Dessa forma, quando encontrar um espaço, cairá no primeiro 'if' e avançará os espaços
				// Até encontrar uma letra;
				while (isalpha(texto[i]))
					 i++;	
			}	
		}

		// Grava o caractere nulo ao final da string para marcar o seu final;
		resultado[j] = '\0';
		printf("%s\n", resultado);
	}
    return 0;
}
/*
#include <iostream>
#include <string>

using namespace std;

int main(){
    string entrada;
    int testes;

    cin >> testes;
    getchar();
    for (int i=0; i<testes; i++){
        getline(cin, entrada);

        for (int i=0; i<entrada.size(); i++){
            if (islower(entrada[i]) && !islower(entrada[i-1]))
                cout<< entrada[i];
        }

        cout <<endl;
    }
    return 0;
}
*/