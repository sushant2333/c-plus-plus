#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void great_prime(int n){
    vector<int> factors;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            if(prime(i)){
                factors.push_back(i);
            }            
        }
    }
    cout<<*max_element(factors.begin(),factors.end());
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    great_prime(n);
}