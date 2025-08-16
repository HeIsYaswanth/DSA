/*
Day10 of DSA (16-08-2025)
Author: Yash
Program: Printing name N times using recursion
*/
#include<bits/stdc++.h>
using namespace std;
void printName(string s, int i, int n){
    if(i>n) return;
    //if initial counter > final means for n=4 if i exceeds 4 then recursion stops.
    cout<<"Hello "<<s<<endl;
    printName(s,i+1,n);
    //incrementing i by 1 everytime the function nears to complete by recursing.
}
int main(){
    int n;
    cout<<"How many time do you want to print your name: ";
    cin>>n;
    string name = "Yash";
    printName(name,1,n);  
    //giving input name, initial counter, final counter for printing name
}