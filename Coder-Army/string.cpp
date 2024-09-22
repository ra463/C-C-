// Remove consecutive repeating characters from string
#include <iostream>
using namespace std;

string removeConsecutive(string str)
{
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[i + 1])
        {
            ans += str[i];
        }
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    cout << removeConsecutive(str);
    return 0;
}