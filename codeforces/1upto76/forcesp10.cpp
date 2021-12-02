#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        string s;
        cin>>s;
        int o=0;
        if(s.size()==2){
            if(s[0]==s[1])
            cout<<1<<endl;
            else
            cout<<0<<endl;
            continue;
        }
        if(s[1]==s[0]){
            s[1]='0';
            o++;
        }
        for (int j=2;j<s.size();j++){
            if(s[j]==s[j-1]){
                o++;
                s[j]='0';
                continue;
            }
            if(s[j]==s[j-2]){
                o++;
                s[j]='0';
            }
        }
        cout<<o<<endl;
    }
    return 0;
}