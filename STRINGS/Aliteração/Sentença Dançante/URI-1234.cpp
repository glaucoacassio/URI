/*
Questao facil:
Ela pedia que intercalasse entre uma letra e outra sendo que a primeira letra de casa frase seria maiscula e a outra minuscula, ate o fim da frase dada.
Eu apenas segui os exemplos triviais da entrada e confiando num AC levei um Error Presentation. Porque nao me atentei a uma coisa, numa string pode vim
assim:  
ma na mmmmmmmmmm         tthuuhjnjnYTTGUEGFUhggu   Y

E deve retornar isso...
Ma Na MmMmMmMmMm         TtHuUhJnJnYtTgUeGfUhGgU   y

Mas se voce so pensar em aumentar uma letra apos a outra como fiz vai levar um erro de apresentacao, fora isso nada demais...
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    char c;

    while (getline(cin, str))
    {
        if (cin.eof()) break;
        int j = 0;
        for (size_t i = 0; i < str.length(); i++)
        {
            c = str[i];
            if (isalpha(c))
            {
                if (j % 2 == 0) c = toupper(str[i]);
                else c = tolower(str[i]);
                j++;
            }
            cout << c; 
        }
        cout << endl;
    }
    return 0;
}
