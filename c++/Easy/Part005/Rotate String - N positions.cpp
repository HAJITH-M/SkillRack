#include <iostream>
#include <cstring> // for strlen function
using namespace std;

int main() 
{
    char s[100], temp;
    int l, j = 0, t = 0;

    cin >> s;  // using cin instead of scanf for C++ input
    cin >> l;

    while (t != l) 
    {
        for (int i = 0; i < strlen(s); i++) 
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        t++;
    }

    cout << s << endl;  // using cout instead of printf for C++ output

    return 0;
}
