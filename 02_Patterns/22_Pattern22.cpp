/*
Day9 of DSA (15-08-2025)
pattern21
----------
33333
32223
32123
32223
33333
*/
#include <bits/stdc++.h>
using namespace std;
void pattern22(int n){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int top=i;
            int bottom = 2*n-i;
            int left = j;
            int right = 2*n-j;
            cout<<n+1-min(min(top,bottom),min(left,right));

        }
        
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern22(num);
}