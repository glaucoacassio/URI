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
#include <array>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    string str, str_cp1, str_cp2;

    cin >> str;
    for (int i=0; i<str.length(); i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str_cp1 = str_cp1 + str[i];

    for (int j = str.length()-1; j >= 0; j--)
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u')
            str_cp2 = str_cp2 + str[j];

    if(str_cp1 == str_cp2) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    
    return 0;
}
