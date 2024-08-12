#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n){
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

int next_prime(int n){
    int next = n + 1;
    while (!is_prime(next))
    {
        next++;
    }
    return next;
}


int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<next_prime(n);
}