#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[],int n){

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
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
    int d;
    cout<<"Enter the number of elements by which the array needs to be rotated"<<endl;
    cin>>d;
    rotateArray(arr+d,n-d);
    for(int i=0;i<d;i++){
        cout<<arr[i]<<" ";
    }
}
