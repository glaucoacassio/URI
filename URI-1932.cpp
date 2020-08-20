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

int kadane(int cot[], int dias, int taxa)
{
	int lucroAtual, lucroFinal, lucroMaximo = 0;

	lucroAtual = lucroFinal = cot[0];

	for(int i = 1; i < dias; i++)
	{
		if((lucroAtual > cot[i] && (lucroAtual - cot[i] >= taxa)) || cot[i] < lucroFinal)
		{
			if(lucroAtual - lucroFinal - taxa > 0)
				lucroMaximo += lucroAtual - lucroFinal - taxa;
			lucroAtual = lucroFinal = cot[i]; 
		}
		if(cot[i] > lucroAtual)
			lucroAtual = cot[i];
	}
	
	if(lucroAtual - lucroFinal - taxa > 0)
		lucroMaximo += lucroAtual - lucroFinal - taxa; 

	return lucroMaximo;
}

int main(int argc, char *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
	int dias, taxa;

	scanf("%d %d", &dias, &taxa);

	int cot[dias];

	for(int i = 0; i < dias; i++)
		scanf("%d", &cot[i]);

	printf("%d\n", kadane(cot, dias, taxa));

	return 0;
}