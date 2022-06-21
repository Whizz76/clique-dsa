#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the binary elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            sum+=1;
            if(maxSum<sum){
                maxSum=sum;
            }
        }
        else{
            sum=0;
        }
    }
    cout<<maxSum;
    return 0;
}
