#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
char findRepeating(string s)
{
    int i,j;
    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i] == s[j])
                return s[i];
        }
    }
}
 
int main()
{
    string inp;
    getline(cin, inp);
    reverse(inp.begin(),inp.end());
    cout<<findRepeating(inp);
    return 0;
}