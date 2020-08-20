#include <cstdio>
#include <stdbool.h>

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    long double resultado, qtsPatinhos; //long double da conta de 10^19

    while (true)
    {
        scanf("%LF", &qtsPatinhos);
        if (qtsPatinhos == -1)
            break;

        if (qtsPatinhos == 0) printf("0\n");
        else printf("%.LF\n", --qtsPatinhos);
    }
    return 0;
}
