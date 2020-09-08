#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, anterior = 1, atual = 1, proximo;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1) cout << "0";
        else if (i == 2 || i == 3) cout << " 1";
        else
        {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
            cout << " " << proximo;
        }
    }
    cout << endl;

    return 0;
}
