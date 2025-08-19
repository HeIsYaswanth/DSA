/*
Day-12 of DSA (19-08-2025)
Author: Yash
Program: Selection Sort
*/
#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y){
    int temp =*x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int least = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[least]){
                least = j;
            }
        }
        swap(&arr[least],&arr[i]);
    }
    //printing after sorting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
                    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing before sorting
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);
    
        
}