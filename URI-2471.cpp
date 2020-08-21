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
#include <array>
#define MAX 10000
using namespace std;

int il, ic, n, sc[MAX], sl[MAX], grid[MAX][MAX];
int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) sl[i] = 0;
    for (int j = 0; j < n; j++) sc[j] = 0;
        
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &grid[i][j]);
            sl[i]+= grid[i][j];
            sc[j]+= grid[i][j];
        }
    
    il = -1, ic = -1;
    for (int i = 0; i < n; i++)
        if (sl[i] != sl[(i+1)%n] && sl[i] != sl[(i+2)%n]) 
            il = i;

    for (int j = 0; j < n; j++)
        if (sc[j] != sc[(j+1)%n] && sc[j] != sc[(j+2)%n]) 
            ic = j;

    if (il == -1 && ic == -1)
        abort();
    
    int valor_antigo = grid[il][ic];
    int valor_novo = valor_antigo - (sl[il] - sl[(il+1) % n]);

    printf("%d %d\n", valor_novo, valor_antigo);

    return 0;
}
