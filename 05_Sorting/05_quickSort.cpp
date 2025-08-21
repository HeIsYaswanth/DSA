/*
Day-14 of DSA (21-08-2025)
Author: Yash
Program: Quick Sort
*/
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[], int low, int high){
    if(low<high){
        int pIndex = partition(arr, low, high);

        //left
        quickSort(arr, low, pIndex-1);

        //right
        quickSort(arr, pIndex+1,high);
    }
}
                    
int main(){
    int n=6;
    int arr[n]={7,4,6,9,5,10};
    cout<<"Before Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sorting
    quickSort(arr,0,n-1);

    //After sorting
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

            
}