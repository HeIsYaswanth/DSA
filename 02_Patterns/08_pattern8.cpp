


#include <bits/stdc++.h>
using namespace std;
void pattern8(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int x=1;x<i;x++){
            cout<<" ";
        }
        //stars
        for(int y=1;y<=(2*n)-2*i+1;y++){
            cout<<"*";
        }
        //spaces
        for(int x=1;x<i;x++){
            cout<<" ";
        }
        cout<<endl;

    }
}
int main(){
    int num;
    cin>>num;
    pattern8(num);
    return 0;
}