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
#include <math.h>
#include <iomanip>
#include <utility>
#include <sstream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, a, b;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(b == 0) cout<<"divisao impossivel"<<endl;
        else cout<< fixed << setprecision(1) << float(a)/b <<endl;
    }
    return 0;
}
