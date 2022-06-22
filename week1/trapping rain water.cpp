#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    set <int,greater<int>> s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==1){
        cout<<0;
        return 0;
    }
    set<int>::iterator it=s.begin();
    advance(it,1);
    auto block=*it;
    advance(it,1);
    int sum=0;
    while(it!=s.end()){
        auto num=count(arr,arr+n,*it);
        sum+=num*(block-*it);
        it++;
    }
    cout<<sum;
    return 0;


}
