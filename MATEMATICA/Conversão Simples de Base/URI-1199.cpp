#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
using namespace std;
 
int main()
{
    int n;
    string s;
    
    while(getline(cin, s))
    {
        //Retorna um ponteiro pra um array que contem uma sequencia de caracteres representando o valor atual
        n = atoi(s.c_str());
        if(n < 0) return 0;
        //Como todo numero hexadecimal seu segundo "digito" por assim dizer é sempre 'x'
        //Simples verificacao...
        if(s[1] == 'x')
        {
            istringstream(s) >> hex >> n;
            cout << dec << n << endl;
        }
        else cout << "0x" << hex << uppercase << n << endl;
    }
    return 0;
}
