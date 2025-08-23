/*
Day-15 of DSA (22-08-2025)
Author: Yaswanth Reddy Salla
Program: Check whether the array is sorted or not
*/
#include<bits/stdc++.h>
using namespace std;
void checkSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            //any left element greater than right
            cout<<"not sorted";
            return;
        }
    }
    cout<<"sorted";
}
                    
int main(){
    int n=6;
    int arr[n] = {1,2,3,4,5,6};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    checkSort(arr,n);         
}