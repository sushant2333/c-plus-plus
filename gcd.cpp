// This program is to calculate greatest common divisor (gcd) between two number using algorithm known as Euclidian Algorithm

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1,num2) << endl;
    return 0;
}
