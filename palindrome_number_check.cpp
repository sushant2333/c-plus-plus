#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    if (n < 0 || (n % 10 == 0 && n != 0))
    {
        return false;
    }

    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;               
        reversed = reversed * 10 + digit; 
        n /= 10;                          
    }
    return original == reversed;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Palindrome number" << endl;
    }
    else
    {
        cout << "Not a palindrome number" << endl;
    }
    return 0;
}
