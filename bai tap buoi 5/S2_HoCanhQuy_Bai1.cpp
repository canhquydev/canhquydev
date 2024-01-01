#include <iostream>
#include <string>
using namespace std;
int main()
{
    int cnt = 0;
    string s,str = "abcdefghiklmnopqrstuvwxyz";
    getline(cin, s);
    for(int  i = 0; i < str.size(); i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(str[i] == s[j])
            {
                cnt++;
            }
        }
        if(cnt !=0)
        {
            cout << str[i] << " " << cnt << endl;
            cnt = 0;
        }
    }
    return 0;
}
