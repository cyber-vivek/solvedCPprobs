#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int t;
    cin>>t;
while(t--){
    string p;
    int n;
    cin.ignore();
    getline(cin,p);
    cin>>n;
    cin.ignore();
    int h =stoi(p.substr(0,2));
    int m =stoi(p.substr(3,2));
    if(p[6]=='A'){
        if(h==12)
        h=0;
    }
    else{
        if(h!=12)
        h=h+12;
    }
    while(n--){
        string f;
        getline(cin,f);

    int h1 =stoi(f.substr(0,2));
    int m1 =stoi(f.substr(3,2));
    int h2 =stoi(f.substr(9,2));
    int m2 =stoi(f.substr(12,2));
    if(f[6]=='A'){
        if(h1==12)
        h1=0;
    }
    else{
        if(h1!=12)
        h1=h1+12;
    }
    if(f[15]=='A'){
        if(h2==12)
        h2=0;
    }
    else{
        if(h2!=12)
        h2=h2+12;
    }
    if((h1==h&&m1==m)||(h2==h&&m2==m)){
        cout<<1;
        continue;}
    if(h1<h){
        if(h2>h)
        cout<<1;
        else if(h2<h&&h2<h1)
        cout<<1;
        else
        cout<<0;
    }
    else if(h1>h){
        if(h2<h)
        cout<<0;
        else if(h2>h&&h2<h1)
        cout<<1;
        else
        cout<<0;
    }
    else{
        if(h2==h){
            if(m=m1){
            cout<<1;
            continue;
            }
            if(m>m1&&m<m2)
            cout<<1;
            else if(m<m1&&m<m2&&m2<m1)
            cout<<1;
            else
            cout<<0;
        }
        else if(m>=m1){
            cout<<1;
        }
        else
        cout<<0;
    }
     cout<<endl<<h<<" "<<m<<" "<<h1<<" "<<m1<<" "<<h2<<" "<<m2<<endl;
}
cout<<endl;
}
    return 0;
}