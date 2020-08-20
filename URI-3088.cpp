#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
using namespace std;

#define MAX 12345

int main(int argc, char *argv[]) 
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    char str[MAX];

    while (~scanf("%[^\n]%*c", str))
    {
        int i = 0;
        while (str[i])
        {
            if (str[i] == ' ')
            {
                if (str[i+1] == ',' || str[i+1] == '.') putchar_unlocked(str[i+1]), ++i;
                else putchar_unlocked(str[i]);
            }
            else putchar_unlocked(str[i]);
            ++i;
        }
        putchar_unlocked('\n');        
    }
    return 0;
}