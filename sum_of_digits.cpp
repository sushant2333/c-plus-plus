// this code is to calculate the sum of the digits in a number 

#include<iostream>
using namespace std;

int sum_of_digits(int n){
    int sum=0;
    while(n){
        int ld = n%10;
        sum+=ld;
        n/=10;
    } 
    return sum;
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}