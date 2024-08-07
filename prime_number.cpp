// check if a number is prime or not 

#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
    int count_factor = 2;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            count_factor++;
    }
    if (count_factor > 2)
        return false;
    else
        return true;
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"the number is a prime number"<<endl;
    }else{
        cout<<"the number is not a prime number"<<endl;
    }
}