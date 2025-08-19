/*
Day- of DSA ()
Author: Yash
Program: understanding about map 
*/
#include<bits/stdc++.h>
using namespace std;
                    
int main(){
    string s;
    cin>>s;
    //int arr[n];
    // for(int i=0;i<s.size();i++){
    //     cin>>arr[i];
    // }
    //map
    unordered_map <char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    //map printing
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
            
}