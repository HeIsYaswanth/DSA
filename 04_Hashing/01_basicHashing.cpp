/*
Day-12 of DSA (18-08-2025)
Author: Yash
Program: Basic Hashing
*/
#include<bits/stdc++.h>
using namespace std;
void hashCount(int x,int n, int arr[]){
    int hashSet[6]={0};
    for(int i=0;i<n;i++){
        hashSet[arr[i]]+=1;
    }
    cout<<hashSet[x];
}
                    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    hashCount(x,n,arr);

            
}