//Cpp program to check whether the number is prime or not.
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    else if(n == 2) return true;
    else{
        int limit = int(sqrt(n));
        for(int i=2;i<=limit;i++){
            if (n%i==0){
                return false;
            }
        }
    }
    return true;
} 
int main(){
    int num;
    cout<<"Enter a number to check prime or not: ";
    cin>>num;
    if(isPrime(num)) cout<<"It's prime";
    else cout<<"Not a prime";
    return 0;
}