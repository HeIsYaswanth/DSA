//count the number of digits in the given number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count=0; //initially count will be 0
    while(num!=0){
        int rem = num%10; //last digit of the number will be extracted
        count++;
        num /=10;  //now number will be divided by 10 to remove the last digit
    }
    cout <<"The count of digits in the given number is: "<<count;
    return 0;
}