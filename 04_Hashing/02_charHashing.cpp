/*
Day- of DSA ()
Author: Yash
Program: Character count using Hashing
*/
#include<bits/stdc++.h>
using namespace std;
void charCount(string s,char c){
    int hashArr[25] = {0};
    for(int i=0;i<s.length();i++){
        hashArr[s[i]-'a']++;
    }
    cout<<"The count of "<<c<<" is "<<hashArr[c-'a'];

}
                    
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    charCount(s,c);
}