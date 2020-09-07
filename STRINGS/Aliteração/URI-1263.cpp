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
        //Tem uma grande diferenca entre a funcao strcpy() e a variavel que criei. 
        string str_cpy = "";
        str_cpy = str_cpy + str[0];
        for (size_t i = 0; i<str.length(); i++)
        {
            size_t pos = str.find(" ", i);
            if (pos == string::npos) break;
            str_cpy = str_cpy + str[pos + 1];
            i = pos;
        }

        aliterations = 0;
        for (int j = 1; j < str_cpy.length(); j++)
        {
            if (tolower(str_cpy[j-1]) == tolower(str_cpy[j]) && tolower(str_cpy[j]) != tolower(str_cpy[j+1]))
                aliterations++;
        }
        cout << aliterations << endl;
    }
    return 0;
}
