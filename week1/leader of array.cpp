#include <bits/stdc++.h>
using namespace std;

void findLeaders(int arr[],int n,int maxNum){
    if(n==0){
        return;
    }
    if(arr[0]>maxNum){
        maxNum=arr[0];
        findLeaders(arr+1,n-1,maxNum);
        cout<<arr[0]<<" ";

    }
    else{
        findLeaders(arr+1,n-1,maxNum);

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
    reverse(arr,arr+n);
    findLeaders(arr+1,n-1,arr[0]);
    cout<<arr[0]<<" ";

    return 0;
}
