/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
E
D E
c D E
B C D E
A B C D E
*/
#include <bits/stdc++.h>
using namespace std;
void pattern18(int n){
    char letter = 'A'+(n-1);
    for(int i=1;i<=n;i++){
        //char innerLetter = letter;
        for(int j=1;j<=i;j++){
            cout<<char((letter+j)-1)<<" ";
            //innerLetter++;
        }
        letter--;
        cout<<endl;

    }
}
int main(){
    int num;
    cin>>num;
    pattern18(num);
}