#include <bits/stdc++.h>
using namespace std;

void roofTop(int arr[],int n,int i,int j,int consequtiveSteps,int maxSteps){
    if(j==n){
        cout<<maxSteps;
    }
    if(arr[j]>arr[i]){
        consequtiveSteps+=1;
        if(maxSteps<consequtiveSteps){
            maxSteps=consequtiveSteps;
        }
        roofTop(arr,n,i+1,i+2,consequtiveSteps,maxSteps);

    }
    else{
        roofTop(arr,n,i+1,i+2,0,maxSteps);
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
    roofTop(arr,n,0,1,0,0);
}
