#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    int rnum, guess;

    srand(time(0));
    rnum = rand() % 100 +1;

    cout << "Enter a number between 1 and 100: ";
    cin >> guess;

    while (guess != rnum)
    {
        if (guess < rnum)
        {
            cout << "Too low\n";
        }
        else
        {
            cout << "Too high\n";
        }
        cout << "Enter a number between 1 and 100: ";
        cin >> guess;

    }
    cout << "CORRECT!\n";

    return 0;
}