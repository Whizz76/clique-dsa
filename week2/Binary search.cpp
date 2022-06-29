#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int l,int r,int k){
    if(k==arr[0]){
        return true;
    }
    if(l<=r){
        int mid=(l+r)/2;
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]>k){
        binarySearch(arr,mid+1,r,k);
    }
    else{
        binarySearch(arr,l,mid-1,k);
    }
    }
    return false;

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
    sort(arr,arr+n);
    int k;
    cout<<"Enter the key"<<endl;
    cin>>k;
    if(binarySearch(arr,0,n-1,k)){
        cout<<k<<" is present in the array"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }

    return 0;
}
