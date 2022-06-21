#include <bits/stdc++.h>
using namespace std;

void maxDiff(int arr[],int n,int i,int j,int diff){
    if(i==n){
        cout<<diff;
    }
    if(i!=n && j==n){
       maxDiff(arr,n,i+1,i+2,diff);
    }
    if(arr[i]<arr[j]){
        if(arr[j]-arr[i]>diff){
            diff=arr[j]-arr[i];
        }
        maxDiff(arr,n,i,j+1,diff);
    }
    else{
        maxDiff(arr,n,i+1,i+2,diff);
    }

}

int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxDiff(arr,n,0,1,-1);
}
