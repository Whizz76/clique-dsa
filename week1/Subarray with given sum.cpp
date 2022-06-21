#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int givenSum;
    cout<<"Enter the given sum"<<endl;
    cin>>givenSum;
    int st=0;
    int en=0;
    while(sum+arr[en]<=givenSum && st<n){
        sum+=arr[en];
        en++;
    }
    if(sum==givenSum){
        cout<<st<<" "<<en;
        return 0;
    }
    while(en<n){
        sum+=arr[en];
        if(sum>givenSum){
            sum=sum-arr[st];
            st++;
        }
        if(sum==givenSum){
            cout<<st<<" "<<en<<endl;
            return 0;
        }
    }
    return 0;
}
