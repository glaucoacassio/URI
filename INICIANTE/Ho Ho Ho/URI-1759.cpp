#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string s = "Ho";
    cin >> n;
    for (int i = 0; i < n-1; i++)
        cout << s <<" ";
    s = s + "!";
    cout << s << endl;    
    return 0;
}
