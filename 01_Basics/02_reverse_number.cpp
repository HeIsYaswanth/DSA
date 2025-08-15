//Reverse the given number;

#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int num = n;
    int rev = 0;
    while(num!=0){
        int lastDigit = num%10; //last digit of the number extracted
        rev = (rev*10)+lastDigit; //adding last digit after multiplying the rev with 10.
        num = num/10;  //removing the last digit.
    }
    return rev;
    
}

int main(){
    int num;
    cout<< "Enter a number: ";
    cin >> num;
    cout << reverse(num);
    return 0;
}
