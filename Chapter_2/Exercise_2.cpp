#include <iostream>
#include <string>
using namespace std;

void exercises1617()
{
    enum Directions
    {
        N,
        S,
        E,
        W
    };
    int direction = 1;
    switch (direction)
    {
    case N:
        cout << "North\n";
        break;
    case S:
        cout << "South\n";
        break;
    case E:
        cout << "East\n";
        break;
    case W:
        cout << "West\n";
        break;
    default:
        break;
    }
}

void excercies510()
{
    int marks_scored = 41;
    if (marks_scored >= 40)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }
}

void excercies14()
{
    int count = 0, limit = 10;
    // cout<<count == 0 && limit <20 << endl; Not Allowed
    // cout << x<y; not allowed
    double x = 2.5;
    cout << (2 < x) && (x < 3);
}

int main()
{
    exercises1617();
}