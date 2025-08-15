/*
Day-4 of DSA Journey (10-08-2025)
Program: Armstrong Number
Language: Cpp
Author: Yash
*/
#include <bits/stdc++.h>
using namespace std;
int digitCount(int n){
    int count = 0;
    while(n!=0){
        n/=10;      //for each iteration last digit will be removed
        count++;   //for each removed digit, count will be incremented
    }
    return count;
}
bool isArmstrong(int n){
    int originalNumber = n;     //duplicating original number
    int totalDigits = digitCount(n); //returns the number of digits
    int armstrongSum = 0;
    while(n!=0){
        int lastDigit = n%10;
        armstrongSum = armstrongSum+int(pow(float(lastDigit),float(totalDigits)));
        //pow only allows decimal type, thats why converting int to float 
        n /=10;
    }
    return originalNumber == armstrongSum;

}
int main(){
    int num;
    cout<<"Enter a number to check Armstrong or not: ";
    cin>>num;
    if(isArmstrong(num)){
        cout<<num<<" is a armstrong number"<<endl;
    }
    else{
        cout<<num<<" is not a armstrong number"<<endl;
    }
    return 0;
}