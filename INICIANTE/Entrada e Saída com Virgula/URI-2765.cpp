#include <bits/stdc++.h> 
using namespace std;

int main(int argc, const char** argv) {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    string str, str_cp = "", str_cp2 = "";

    getline(cin, str);
    size_t found = str.find(",");
    for (size_t i = 0; i < found; i++)
        str_cp += str[i];

    for (size_t j = found+1; j < str.length(); j++)
        str_cp2 += str[j];
    
    cout << str_cp + "\n" + str_cp2 << endl;
    
    return 0;   
}
