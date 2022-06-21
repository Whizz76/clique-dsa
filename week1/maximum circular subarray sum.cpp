#include <bits/stdc++.h>
using namespace std;
int subArrSum(int arr[],int n){
    int sum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=-arr[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxSum;
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
    int check=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]<0){
            check+=1;
        }
    }
    if(check==0){
        cout<<sum;
    }
    else{
        int subSum=subArrSum(arr,n);
        cout<<sum+subSum;
    }
}
