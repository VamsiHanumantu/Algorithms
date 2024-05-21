#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {23,34,45,56,78};
    int target;
    cin>>target;

    int start = 0 ,end=4;

    while(start<=end){
        int mid  = (end-start)/2+start;
        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            return 0;
        }
        else if(arr[mid]<target){
            start =mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"element not found";

}