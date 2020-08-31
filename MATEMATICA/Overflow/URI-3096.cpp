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

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

long long findDigits(int n)
{
    // fatorial de numero -x 
    // nao existe
    if (n < 0)
        return 0;

    // caso base
    if (n <= 1)
        return 1;

    // Usei a formula de Kamenetsky pra calcular
    // o numero de digitos
    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0));
    
    return floor(x) + 1;
}

int main()
{
    int n;
    
    cin>>n;
    cout << findDigits(n) << endl;
    return 0;
}
