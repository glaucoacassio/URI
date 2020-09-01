#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <clocale>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int A, D;
	while(cin >> A >> D && (A || D))
	{
      vi dist_defensor(D), dist_atacante(A);
      for (int i = 0; i < A; i++)
        cin >> dist_atacante[i];
      for (int j = 0; j < D; j++)
        cin >> dist_defensor[j];
      sort(dist_atacante.begin(), dist_atacante.end());
      sort(dist_defensor.begin(), dist_defensor.end());
      //Se ele esta mais proximo do gol que o ultimo jogador ou mais proximo do que o penultimo esta impedido
      //A questao que disse isso:
      // "Um jogador atacante está impedido se ele está mais próximo da linha do gol do oponente do que o 
      // penúltimo adversário."
      if (dist_atacante[0] < dist_defensor[0] || dist_atacante[0] < dist_defensor[1]) cout << "Y" << endl;
      else cout << "N" << endl; 	
	}
	return 0;
}
