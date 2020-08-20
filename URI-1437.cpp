#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int N, pos;
string str;

void side_correct(string str) 
{
    pos = 1;
    for (int i = 0; i < N; i++)
    {
        if (str[i] == 'D') 
        {
            pos++;
            if (pos > 4) pos = 1;
        } 
        else if (str[i] == 'E') 
        {
            pos--;
            if (pos == 0) pos = 4;
        }
    }

    if (pos == 1) cout<<'N'<<endl;
    else if (pos == 2) cout<<'L'<<endl;
    else if (pos == 3) cout<<'S'<<endl;
    else if (pos == 4) cout<<'O'<<endl;
}

int main(int argc, char **argv)
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    while (scanf("%d", &N) && N != 0)
    {
        cin.ignore();
        getline(cin, str);
        side_correct(str);
    }
    return 0;
}
