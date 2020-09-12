/**   
 *   Author:    @glaucoacassioc
 *   Created on 12.09.2020, 15:22:08
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	int n, c = 0, sol = 0;

	while(cin >> str >> n)
	{
		if(str == "ABEND") break;
		if(str == "SALIDA")
		{ 
			c++;
			sol += n;
		}
		else if(str == "VUELTA")
		{
			c--;
			sol -= n;
		}
	}
	cout << sol <<"\n"<< c << endl;
	 
	return 0;
}
