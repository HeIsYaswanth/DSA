/*
Day7 of DSA (13-08-2025)
Pattern 11
----------
1
01
101
0101
*/
#include <bits/stdc++.h>
using namespace std;
void pattern11(int n){
    for(int i=1;i<=n;i++){
        int pattern= i%2!=0?1:0;
        for(int j=1;j<=i;j++){
            cout<<pattern;
            pattern = 1-pattern;
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern11(num);
    return 0;
}