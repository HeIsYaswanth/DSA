/*
Day-05 of DSA Journey (11-08-2025)
Program: Printing all divisors
Language: Cpp
Author: Yash
*/
#include <bits/stdc++.h>
using namespace std;
vector <int> largeDivisors;
void divisors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<"  ";
            if(i!=n/i){
                largeDivisors.push_back(n/i);
            }
        }
    }
    for(int i =largeDivisors.size()-1;i>=0;i--){
        cout<<largeDivisors[i]<<"   ";
    }
}
int main(){
    int num;
    do{
        cout<<"Enter a positive number: ";
        cin>>num;
    }while(num<1);
    divisors(num);
}