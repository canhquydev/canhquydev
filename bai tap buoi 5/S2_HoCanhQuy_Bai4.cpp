#include <iostream>
#include <string>
using namespace std;
void tao_email(string s)
{
    string ho, dem, ten;
    int j;
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    while(s[0] == ' ')
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i+1];
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            ho = s.substr(0, i);
            s.erase(0, i);
            j = i;
            break;
        }
    }
    while(s[0] == ' ')
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i+1];
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            dem = s.substr(0, i);
            s.erase(0, i);
            j = i;
            break;
        }
    }
    while(s[0] == ' ')
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i+1];
        }
    }
    string mail = s + ho[0] + dem[0];
    cout << mail << "@gmail.com" << endl;
}
int main()
{
    string s;
    getline(cin, s);
    tao_email(s);
    return 0;
}
