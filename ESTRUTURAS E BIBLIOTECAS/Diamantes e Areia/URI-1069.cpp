#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int n;

    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, str);
        int tmp = 0, diamonds = 0;
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == '<') tmp++;
            if (str[i] == '>' && tmp > 0)
            {
                diamonds++;
                tmp--;
            }
        }
        cout << diamonds << endl;
    }
    return 0;
}
