#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    cout<<"Enter the array elements in sorted manner"<<endl;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"After removing duplicates, array elements are"<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}
