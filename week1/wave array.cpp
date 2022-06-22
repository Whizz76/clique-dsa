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
    for(int i=0;i<n;i=i+2){
        if(i+1!=n){
           swap(arr[i],arr[i+1]);
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}
