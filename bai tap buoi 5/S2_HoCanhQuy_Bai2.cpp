#include <iostream>
#include <string>
using namespace std;
bool ktrastr(string str, char s)
{
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == s)
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    string s1,s2, str = "abcdefghiklmnopqrstuvwxyz";
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(ktrastr(s1, str[i]) && ktrastr(s2, str[i]))
        {
            cout << str[i];
        }
    }
    cout << endl;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(ktrastr(s1, str[i]) || ktrastr(s2, str[i]))
        {
            cout << str[i];
        }
    }
    return 0;
}
