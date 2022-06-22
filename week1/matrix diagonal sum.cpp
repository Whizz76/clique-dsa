#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows of square matrix"<<endl;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
            cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(n%2!=0 && i==n/2){
            sum=sum+arr[i][i];
            continue;
        }
        sum=sum+arr[i][i]+arr[i][n-i-1];
    }
    cout<<sum;
    return 0;

}
