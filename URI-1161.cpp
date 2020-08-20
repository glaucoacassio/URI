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

long long int fatorial(int n)
{
    long long int fat = 1;
    //Excessao, nao existe fatorial de um numero < 0
    if (n < 0) fat = 0;
    
    if (n == 0) return 1;
    else
    {
        for (int i = 1; i <= n; i++) fat = fat * i;
    }
    return fat;
}   

int main(int argc, char *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    long long int fat1, fat2;
    int N, M;

    while(scanf("%d %d", &N, &M) != EOF)
    {
        fat1 = fatorial(N);
        fat2 = fatorial(M);
        printf("%lld\n", (fat1 + fat2));
    }
    
    return 0;
}