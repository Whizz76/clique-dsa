#include <bits/stdc++.h>
using namespace std;

bool sortArr(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    vector<pair<int,int>> arr;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(make_pair(x,i));
    }
    int key;
    cout<<"Enter any sum value"<<endl;
    cin>>key;
    sort(arr.begin(),arr.end(),sortArr);
    int st=0;
    int en=n-1;
    while(st<=en){
        int &stnum=arr.at(st).first;
        int &ennum=arr.at(en).first;
        if(stnum+ennum==key){
            cout<<arr.at(st).second<<" "<<arr.at(en).second<<endl;
            return 0;
        }
        if(stnum+ennum>key){
            en--;
        }
        if(stnum+ennum<key){
            st++;
        }
    }
    cout<<"No such pair exists"<<endl;
    return 0;
}
