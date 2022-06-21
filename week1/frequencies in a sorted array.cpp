#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n,int check,int freq){
    if(n==0){
        cout<<freq<<" ";
        return;
    }
    if(arr[0]==check){
        freq++;
        frequency(arr+1,n-1,arr[0],freq);
    }
    else{
        cout<<freq<<" ";
        frequency(arr+1,n-1,arr[0],1);
    }
}

int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements in a sorted manner"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequency(arr+1,n-1,arr[0],1);
}
