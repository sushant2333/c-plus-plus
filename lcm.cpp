#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    if (a % b == 0)
        return a;
    if (b % a == 0)
        return b;
    return (a / gcd(a, b)) * b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    return 0;
}
