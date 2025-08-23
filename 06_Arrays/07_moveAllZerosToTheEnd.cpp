/*
Day-16 of DSA (23-08-2025)
Author: Yash
Program: Move All Zeros to the end
*/
#include<bits/stdc++.h>
using namespace std;
/*
void moveZerosToEndBruteForce(int arr[], int n){
    vector <int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i] = temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i] = 0;
    }

}
*/
void moveZeroesToEndOptimal(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1) return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

                    
int main(){
    int n=10;
    int arr[n] = {1,0,0,2,3,4,5,0,7,0};
    //bruteforce
    //moveZerosToEndBruteForce(arr,n);
    //optimal
    moveZeroesToEndOptimal(arr,n);

    //after moving
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
            
}