/*
Day-5 of DSA Journey (11-08-2025)
Program: Palindrom Number
Language: Cpp
Author: Yash
*/
#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    int rev = 0;
    while(n!=0){
        int lastDigit = n%10;   //lastDigit is extracted
        rev = (rev*10)+lastDigit; 
        n = n/10;     //now, last digit is removing
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num<0){
        num = abs(num); 
        //negative numbers also converted to postive
    }
    int reversedNumber = reverseNumber(num);
    if(reversedNumber == num) {
        cout<< "The number "<<num<<" is palindrome."<<endl;
    }
    else {
        cout<<"The number "<<num<<" is not palindrome."<<endl;
    }
    return 0;
}