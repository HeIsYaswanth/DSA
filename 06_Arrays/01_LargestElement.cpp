/*
Day-15 of DSA (22-08-2025)
Author: Yash
Program: First Largest Element of the Array
*/
#include<bits/stdc++.h>
using namespace std;
void largestElement(int arr[],int n){
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest element is: "<<largest;
}
                    
int main(){
    int n=6;
    int arr[n] = {4,5,6,8,2,1};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    largestElement(arr,n);
            
}