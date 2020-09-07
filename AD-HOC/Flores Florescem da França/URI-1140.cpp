#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	string str;

	while (getline(cin, str) && str != "*")
	{
	      fflush(stdin); //Limpar o buffer
	      bool istautograma = true;
	      for (size_t i = 0; i < str.length(); i++)
	      {
			size_t pos = str.find(" ", i);
			if (pos == string::npos) break;
			if (towlower(str[0]) != tolower(str[pos + 1]))
			{
			  istautograma = false;
			  break;
			}
			i = pos; //atualiza a posicao
	      }
	      if (istautograma) puts("Y");
	      else puts("N");
	}
	return 0;
}
