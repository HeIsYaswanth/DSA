/*
Day-16 of DSA (23-08-2025)
Author: Yash
Program: Left Rotate Array by K elements 
*/
#include<bits/stdc++.h>
using namespace std;
/*
void leftRotateByKBruteForce(int arr[], int n, int k){
    k = k%n;
    vector <int> temp;
    //lets push the first k elements in to the temp
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    //update the array by over writing k elements
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //lets push the temp elements in to the arr
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }

}
*/
//optimal
void leftRotateByKOptimal(int arr[], int n, int k){
    k = k%n; //ex: k =35; n=6 35%6 = 5--> simply we can rotate by 5
    reverse(arr,arr+k); //index 0 to 1 reverse
    reverse(arr+k,arr+n); //index 2 to 5 reverse
    reverse(arr,arr+n); //reverse total array 0 to 5
}
                    
int main(){
    int n=6;
    int arr[n] = {1,2,3,4,5,6};
    int k=2;
    //before rotation
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    leftRotateByKOptimal(arr,n,k);
    cout<<"After rotation by "<<k<<" places"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
            
}