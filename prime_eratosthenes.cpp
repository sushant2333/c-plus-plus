#include<iostream>
using namespace std;

void sieve_eratosthenes(int x){
    int arr[x] = {0};
    for(int i=2;i<=x;i++){
        if(arr[i]==0){
            for(int j=i*2;j<=x;j+=i){
                if(arr[j]==0){
                    arr[j]=1;
                }
            }
        }
    }
    for(int i=2;i<=x;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"enter the upper bound"<<endl;
    cin>>n;
    sieve_eratosthenes(n);
}