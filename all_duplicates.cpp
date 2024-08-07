#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements you want to enter in the vector"<<endl;
    cin>>n;
    vector<int> arr;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"the entered array is : "<<endl;
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    int i=1;
    while(i<arr.size()){
        if(arr[i]==arr[i-1]){
            v.push_back(arr[i]);
        }
        i++;
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}