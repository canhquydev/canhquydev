#include <iostream>
#include <string>
using namespace std;
void chuan_hoa(string s)
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
    ho[0] -= 32;
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
    dem[0] -= 32;
    while(s[0] == ' ')
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = s[i+1];
        }
    }
    s[0] -= 32;
    cout << ho << " " << dem << " " << s << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t > 0)
    {
        getline(cin, s);
        chuan_hoa(s);
        t--;
    }
    return 0;
}
