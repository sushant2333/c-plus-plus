#include <iostream>
using namespace std;

int main()
{
    // person 1 is thinking whereas person 2 is guessing
    //  cout<<"consider range is in between 1 to 20:";
    int num, guess;
    cout << "enter the things in mind:";
    cin >> num;
    cout << "enter the guess:";
    cin >> guess;
    while (guess != num)
    {
        if (num > guess)
        {
            cout << "low" << endl;
        }
        else
        {
            cout << "high" << endl;
        }
        // int guess;
        cout << "again guess number:" << endl;
        cin >> guess;
    }
    if (guess == num)
    {
        cout << "u guess correct";
    }
    return 0;
}