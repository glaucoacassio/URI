#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin) ;
        freopen("out.txt", "w", stdout) ;
    #endif
    int n, tc, ans;

    cin >> tc;
    while (tc--)
    {    
        cin >> n;
        ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0) 
                ans = ans + i;        
        }
        if(n == ans) cout << n << " eh perfeito" << endl;
        else cout << n << " nao eh perfeito" << endl;
    }
    return 0;
}
