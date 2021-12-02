#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        int len=r-l+1;
        k=k%len;
        if(k==0){
            continue;
        }
        string f;
        f=s.substr(0,l-1);
        f=f+s.substr(r-k,k);
        f=f+s.substr(l-1,len-k);
        f=f+s.substr(r,s.size()-r);
        s=f;
    }
    cout<<s;
    return 0;
}