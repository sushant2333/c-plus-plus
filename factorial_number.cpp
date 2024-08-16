#include<iostream>
using namespace std;

int factorial_recursive(int n){
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<factorial_recursive(n);
    return 0;
}