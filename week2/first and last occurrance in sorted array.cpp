#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter the array elements in sorted manner"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cout<<"Enter the key number"<<endl;
    cin>>k;
    int c=count(arr.begin(),arr.end(),k);
    if(c==0){
        cout<<"No such number exists"<<endl;
        return 0;
    }
    auto it=find(arr.begin(),arr.end(),k);
    int index=it-arr.begin();
    cout<<index<<" "<<index+c-1;
    return 0;
}
