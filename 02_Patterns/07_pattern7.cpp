/*
Day6 of DSA (12-08-2025)
Pattern7
-------
   *
  ***
 *****
*******
*/
#include <bits/stdc++.h>
using namespace std;
void pattern7(int n){
    //assume n=3
    for(int i=1;i<=n;i++){ //row started
        for(int j=i;j<n;j++){
            //row1 = __
            //row2 = _
            cout <<" "; 
        }
        for(int k=1;k<=i;k++){
            //row1 = *
            //row2= **
            cout<<"*";
        }
        for(int l=1;l<i;l++){
            //right side row1 = no star
            //row2 = *
            cout<<"*";
        }
        cout<<endl; //row ended
    }

}
int main(){
    int num;
    cin>>num;
    pattern7(num);
    return 0;
}