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
#include <math.h>
#include <utility>
#include <sstream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int i, j, n, soma;

    while (cin>>n)
    {
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        
        sort(v.begin(), v.end());
        //4 9 10 43       
        soma = i = 0;
        j = n-1;
        while(j > i)//porque vou ta correndo os pares
            //avanco um pra direita e um pra esquerda, ate acabar o vetor
            soma += abs(v[i++] - v[j--]);
        printf("%d\n", soma); 
    }
    return 0;
}