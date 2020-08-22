#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

int main(int argc, char **argv)
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n;
    unsigned int u, v;

    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%u %u",&u, &v);
        printf("%u\n", gcd(u, v));
    }
    return 0;
}
