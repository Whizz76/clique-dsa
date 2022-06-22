#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows of a square matrix"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
