#include <bits/stdc++.h> 
using namespace std;

int main(int argc, const char** argv) {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    vector<double> A(110);

    for (int i = 0; i < 100; i++)
    {
        cin >> A[i];
        if (A[i] <= 10.0) cout << "A[" << i << "] = "<< fixed << setprecision(1) << A[i] << endl;
    }
    return 0;   
}
