#include <iostream>
using namespace std;

int main()
{
    int fisrt = 0, second = 1, current, n;
    cout << "Enter the number: ";
    cin >> n;
    current = fisrt + second;
    cout << fisrt << " " << second << " ";

    for (int i = 2; i < n; i++)
    {
        current = fisrt + second;
        fisrt = second;
        second = current;
        cout << current << " ";
    }

    return 0;
}