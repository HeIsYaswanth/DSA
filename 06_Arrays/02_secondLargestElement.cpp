/*
Day-15 of DSA (22-08-2025)
Author: Yaswanth Reddy Salla
Program: Second Largest Element
*/
#include<bits/stdc++.h>
using namespace std;
void secondLargest(int arr[],int n){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>largest){
            secondLargest=largest;
            largest = arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    cout<<"The largest is: "<<largest<<endl;
    cout<<"The second largest is: "<<secondLargest<<endl;
}
                    
int main(){
    int n=6;
    int arr[n] = {4,1,6,4,8,7};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    secondLargest(arr,n);
            
}