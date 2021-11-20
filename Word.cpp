#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    int len = s.length();
    int Upcount = 0;
    int lcount = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i]<91)
        Upcount++;

        else
        lcount++;
    }
    string s2;
    if(lcount>=Upcount)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<< s << endl;
    }
    return 0;
}