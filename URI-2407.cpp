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
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#define MAX 1000

using namespace std;

int n, s, p, m[MAX][MAX], maior = -1000000;

int main () 
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif 

    scanf(" %d", &n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf(" %d", &m[i][j]);
            if (m[i][j] > maior) maior = m[i][j];
        }
    }
    //pego a soma da primeira linha pra comparar com as demais
    s = 0;
    for (int i = 0; i < n; i++)
        s += m[0][i];

    //linhas 
    //Ps.:Como ja peguei a primeira linha entao eu comeco meu for de 1
    for (int i = 1; i < n && s != -1; i++) 
    {
        p = 0;
        for (int j = 0; j < n; j++)
            p += m[i][j];
        if (p != s) s = -1;
    }

    //colunas
    for (int j = 0; j < n && s != -1; j++) 
    {
        p = 0;
        for (int i = 0; i < n; i++)
            p += m[i][j];
        if (p != s) s = -1;
    }

    //diagonal principal
    p = 0;
    for (int i = 0; i < n && s != -1; i++)
        p += m[i][i];
    if (p != s) s = -1;

    //diagonal secundaria
    p = 0;
    for (int i = 0; i < n && s != -1; i++)
        p += m[i][n - i - 1];
    if (p != s) s = -1;

    if ((s != -1) && maior == n*n) printf("%d\n", s);
    else printf("0\n");
    
    return 0;
}
