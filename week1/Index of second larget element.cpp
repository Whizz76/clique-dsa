#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of array elements"<<endl;
   cin>>n;
   int arr[n];
   cout<<"Enter the array elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int maxNum=INT_MIN;
   for(int i=0;i<n;i++){
    if(arr[i]>maxNum){
        maxNum=arr[i];
    }

   }
   int secondLargestNum=INT_MIN;
   for(int i=0;i<n;i++){
    if(secondLargestNum<arr[i] && arr[i]<maxNum){
        secondLargestNum=arr[i];
    }
   }
   auto it=find(arr,arr+n,secondLargestNum);
   if(distance(arr,it)!=n){
    cout<<distance(arr,it)<<endl;
   }
   else{
    cout<<"Not exist"<<endl;
   }



}
