/*
File: 004.cpp

Author: glaucoacassioc
Created on 2020-09-09, 10:08:49
*/
#include <bits/stdc++.h> 
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int s, va, vb;
    double diferenca;

    while (scanf("%d %d %d", &s, &va, &vb) != EOF)
    {    
        if (va > vb) 
        {
            diferenca = (double) s / (va-vb);
            cout << fixed << setprecision(2) << diferenca << endl;
        }
        else if (vb >= va || (va - vb) <= s) cout << "impossivel" << endl;
    }
    return 0;
}
