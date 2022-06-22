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
    if(n==1){
        cout<<"equilibirium element is "<<arr[0];
        return 0;
    }
    for(int i=1;i<n;i++){
        if(accumulate(arr,arr+i,0)==accumulate(arr+i+1,arr+n,0)){
            cout<<"equilibirium element is "<<arr[i];
            return 0;
        }
    }
    cout<<"No such element exists";
    return 0;
}
