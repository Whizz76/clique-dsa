#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[],int n){
    if(n==0){
        return;
    }
    if(arr[0]==0){
        moveZeros(arr+1,n-1);
        cout<<0<<" ";
    }
    else{
        cout<<arr[0]<<" ";
        moveZeros(arr+1,n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveZeros(arr,n);
}
