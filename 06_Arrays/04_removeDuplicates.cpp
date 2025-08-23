/*
Day-15 of DSA (22-08-2025)
Author: Yaswanth Reddy Salla
Program: Remove Duplicates
*/
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            //next non repeating elelemt
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
                    
int main(){
    int n=10;
    int arr[n] = {1,1,1,2,2,2,3,3,4,5};
    cout<<"Before Removing Duplicates: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int newLength = removeDuplicates(arr,n);
    //function returns new length of the array after removing duplicates
    cout<<"After removing duplicates: ";
    for(int i=0;i<newLength;i++){
        cout<<arr[i]<<" ";
    }
           
}