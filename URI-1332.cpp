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

int main(int argc, char *argv[]) 
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int len, n;
    char word[6];

    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%s", word);
        len = strlen(word);
        if (len == 5) printf("3\n");
        else
        {
            if (word[0] == 'o' && word[2] == 'e') printf("1\n");
            else if (word[0] == 'o' && word[1] == 'n') printf("1\n");
            else if (word[1] == 'n' && word[2] == 'e') printf("1\n");
            else printf("2\n");
        }
    }    
    return 0;
}