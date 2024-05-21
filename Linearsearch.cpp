#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {23,21,44,33,67};
    int target;
    cin>>target;
    for(int i=0;i<5;i++){
          if(arr[i]==target){
            cout<<"Element found at index "<<i;
            return 0;
          }
    }
    cout<<"Element not found";
    return 0;
}