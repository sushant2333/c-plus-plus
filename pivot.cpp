// find the pivot element in the sorted and rotated array using binary search 

#include<iostream>
using namespace std;

int pivotArray(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e){

        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid = (s + e) / 2;
    }
    return e;  // s can also be written
}

int main(){
    int arr[7]={5,7,9,10,2,3,4};
    cout<<pivotArray(arr,7);
    return 0;
}