// we are doing prime factorisation on a number

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void prime_factors(int n)
{

    if (n < 2)
    {
        cout << "prime factorisation of this number is not possible" << endl;
        return;
    }

    if (is_prime(n))
    {
        cout << n << endl;
        return;
    }
    vector<int> ans;
    vector<int> prime;

    for (int i = 2; i <= n / 2; i++)
    {
        if (is_prime(i))
        {
            prime.push_back(i);
        }
    }

    for (auto i : prime)
    {
        if (is_prime(n))
        {
            ans.push_back(n);
            break;
        }
        while (n % i == 0)
        {
            n = n / i;
            ans.push_back(i);
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    prime_factors(n);
}