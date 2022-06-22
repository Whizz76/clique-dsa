#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Enter the number of columns"<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
