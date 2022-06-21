#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    set<int> s;
    int check=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    for(auto it:s){
        int num=count(arr,arr+n,it);
        if(num>n/2){
            check+=1;
            cout<<it;
        }
        else{
            continue;
        }
    }
    if(check==0){
        cout<<"No Majority element"<<endl;
    }
}
