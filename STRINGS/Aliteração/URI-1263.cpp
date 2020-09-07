/*
File: 001.cpp

Author: glaucoacassioc
Created on 2020-09-06, 17:15:43
*/
#include <bits/stdc++.h> 
using namespace std;

int32_t main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin) ;
        freopen("out.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string str;
    int aliterations;

    while(getline(cin, str))
    {
        if(cin.eof()) break;
        string str_cp = "";
        str_cp = str_cp + str[0];
        for (size_t i = 0; i<str.length(); i++)
        {
            size_t pos = str.find(" ", i);
            if (pos == string::npos) break;
            str_cp = str_cp + str[pos + 1];
            i = pos;
        }

        aliterations = 0;
        for (int j = 1; j < str_cp.length(); j++)
        {
            if (tolower(str_cp[j-1]) == tolower(str_cp[j]) && tolower(str_cp[j]) != tolower(str_cp[j+1]))
                aliterations++;
        }
        cout << aliterations << endl;
    }
    return 0;
}
