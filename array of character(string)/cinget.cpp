#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i = 0;
    int digit = 0;
    int alphabet = 0;
    int space = 0;
    char sentence[1000];
    char temp = cin.get();
    while (temp != '\n')
    {
        sentence[i++] = temp;
        if (temp >= 'A' && temp <= 'Z' || temp >= 'a' && temp <= 'z')
        {
            alphabet++;
        }
        else if (temp >= '0' && temp <= '9')
        {
            digit++;
        }
        else if (temp == isspace(temp) && temp == '\t')
        {
            space++;
        }
        temp = cin.get();
    }
    cout << "Digit: " << digit << endl;
    cout << "Alphabet: " << alphabet << endl;
    cout << "Spaces: " << space << endl;
    return 0;
}