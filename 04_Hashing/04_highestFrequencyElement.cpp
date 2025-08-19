/*
Day- of DSA (19-08-2025)
Author: Yash
Program: Highest Frequency Element
*/
#include<bits/stdc++.h>
using namespace std;
                    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //mapping
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int highestFreqNumber=0;
    int highestFreq=0;


    for(auto it:mpp){
        if(it.second>highestFreq){
            highestFreq=it.second;
            highestFreqNumber = it.first;
        }
    }
    cout<<highestFreqNumber<<"->"<<highestFreq<<endl;

            
}