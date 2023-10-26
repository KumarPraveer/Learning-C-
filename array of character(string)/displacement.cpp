#include <iostream>
using namespace std;
int main()
{
    char route[1000];
    cin.getline(route, 1000);
    int x = 0;
    int y = 0;
    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    // first Quadrand
    if (x >= 0 && y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "S";
        }
    }
    // 2nd quadrant
    else if (x <= 0 && y >= 0)
    {
        while (y--)
        {
            cout << "S";
        }
        while (x++)
        {
            cout << "E";
        }
    }
    // 3rd quadrant
    else if (x <= 0 && y <= 0)
    {
        while (x++)
        {
            cout << "E";
        }
        while (y++)
        {
            cout << "N";
        }
    }
    // 4th Quadrant
    else
    {
        while (x--)
        {
            cout << "W";
        }
        while (y++)
        {
            cout << "N";
        }
    }
    return 0;
}