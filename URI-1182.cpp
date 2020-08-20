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

#define MAX 12

int main(int argc, char *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int C;
    float somaColuna, M[MAX][MAX];
    char op;

    scanf("%d", &C);
    getchar();
    scanf("%c", &op);

    somaColuna = 0;
    for (int i=0; i<MAX; i++)
    {
        for (int j=0; j<MAX; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for(int k=0; k<MAX; k++) 
        somaColuna += M[k][C];    
    
    if (toupper(op) == 'S') printf("%.1f\n", somaColuna);
    else printf("%.1f\n", somaColuna/12.0);

    return 0;
}