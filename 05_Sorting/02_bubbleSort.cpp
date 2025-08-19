/*
Day-12 of DSA (19-08-2025)
Author: Yash
Program: Bubble Sort
*/
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    //after sorting
    cout<<endl<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

            
}