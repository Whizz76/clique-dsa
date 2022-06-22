#include <bits/stdc++.h>
using namespace std;
int main(){
    //spiral matrix
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
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=m-1;
    while(rs<=re && cs<=ce){
        for(int j=cs;j<=ce;j++){
            cout<<arr[rs][j]<<" ";
        }
        rs+=1;
        continue;
        for(int i=rs;i<=re;i++){
            cout<<arr[i][ce]<<" ";
        }
        ce-=1;
        continue;
        for(int j=ce;j>=cs;j--){
            cout<<arr[re][j]<<" ";
        }
        re-=1;
        continue;
        for(int i=re;i>=rs;i--){
            cout<<arr[i][cs]<<" ";
        }
        cs+=1;
        continue;

    }
    return 0;


}
