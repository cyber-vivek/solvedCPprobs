#include<iostream>
#include<string>
using namespace std;

int hcf(int a,int b){
    if(b==0)
    return a;
    else
    return hcf(b,a%b);
}
int lcm(int a,int b){
    return a*b/hcf(a,b);
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s,p;


        // => Use with care.
        getline(cin,s);
        getline(cin,p);
        int k=lcm(s.size(),p.size());
        int c1=(k/s.size()),c2=(k/p.size());
        string s1=s,p1=p;
        for (int i=1;i<c1;i++){
            s1=s1+s;
        }
        for (int i=1;i<c2;i++){
            p1=p1+p;
        }
        int lo;
        for (lo=0;lo<k;lo++){
            if(s1[lo]==p1[lo])
            continue;
            else
            break;
        }
        if(lo==k)
        cout<<s1<<endl;
        else
        cout<<-1<<endl;
        
    }
}