#include <bits/stdc++.h>
using namespace std;

void maxIndex(int arr[],int i,int j,int n,int mi){
    if(i==n){
      cout<<mi;
    }
    if(i!=n && j==n){
        maxIndex(arr,i+1,i+2,n,mi);
    }
    if(i!=n && j!=n){
        if(arr[j]>arr[i]){
        if(mi<j-i){
            mi=j-i;
        }
        }
        maxIndex(arr,i,j+1,n,mi);
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
    maxIndex(arr,0,1,n,-1);
}
