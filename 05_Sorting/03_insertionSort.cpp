/*
Day-12 of DSA (19-08-2025)
Author: Yash
Program: Insertion Sort
*/
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
}
                    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //before sorting
    cout<<"Before Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sorting
    insertionSort(arr,n);
    //after sorting
    cout<<"After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
            
}