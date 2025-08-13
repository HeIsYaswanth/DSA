/*
Day7 of DSA (13-08-2025)
Author: Yash
Pattern13
---------
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    int patternNum=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<patternNum<<" ";
            patternNum++;
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern13(num);
}