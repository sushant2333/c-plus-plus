#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={4,3,5,3,2,1,6};
    for(int i=0;i<v.size();i++){
        int index = abs(v[i]) - 1;
        cout<<index<<" ";
    }
}