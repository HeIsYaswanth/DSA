/*
Day-16 of DSA (23-08-2025)
Author: Yash
Program: Left Rotate Array by 1 Element
*/
#include<bits/stdc++.h>
using namespace std;
void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
                    
int main(){
    int n =6;
    int arr[n] = {1,2,3,4,5,6};
    leftRotateByOne(arr,n);
    //After left rotate
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}