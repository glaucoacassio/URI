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
#include <cstdlib>
#include <fstream>
#include <climits>
#include <clocale>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long int ll;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	ios::sync_with_stdio(false);
	cin.tie(0);
	int fat[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	int i, n, ans = 0;
	cin >> n;
	while (n != 0)
	{
		for (i = 1 ;; i++)
			if (fat[i] >= n or i > 8)
				break;
			(fat[i] <= n) ? n -= ar[i] : n -= ar[i - 1];
			ans++;
	}
	cout << ans << endl;

	return 0;
}
