#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,l=0,u=0,n=0,sc=0;
    cin>>t;
    string s;
    for (int i=0;i<t;i++){
        cin>>s;
        l=0;
        u=0;
        n=0;
        sc=0;
        if (s.length()>=10){
            for(int j=0;j<s.length();j++){
                if(s[j]>=97&&s[j]<=122){
                    l++;
                    continue;
                }
                if(s[j]>=65&&s[j]<=90){
                    if(j!=0&&j!=(s.length()-1)){
                    u++;
                    continue;}
                    else
                    continue;
                }
                if (s[j]>=48&&s[j]<=57){
                    if(j!=0&&j!=(s.length()-1)){
                    n++;
                    continue;}
                    else
                    continue;
                }
                if((s[j]=='@')||(s[j]=='#')||(s[j]=='%')||(s[j]=='&')||(s[j]=='?')){
                    if(j!=0&&j!=(s.length()-1)){
                    sc++;}
                }
            }
            if(l!=0&&u!=0&&n!=0&&sc!=0){
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}