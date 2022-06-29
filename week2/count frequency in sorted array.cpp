#include <bits/stdc++.h>
using namespace std;
// solution for both q3 and q4. just put k=1 for q4
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the target value"<<endl;
    cin>>k;
    int num=count(arr,arr+n,k);
    cout<<k<<" is present "<<num<<" times in the given array"<<endl;
    return 0;
}
