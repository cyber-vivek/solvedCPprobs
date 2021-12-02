#include<iostream>
using namespace std;
int tfc(string x){
    if(x[6]=='A'){
        if(x.substr(0,2)=="12")
        return 0;
        else
        return stoi(x.substr(0,2));
    }
    return (stoi(x.substr(0,2))+12);
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string p,ans;
        getline(cin,p);
        int h,m=stoi(p.substr(3,2));
        h=tfc(p);
        // cout<<h<<m;
        int n;
        cin>>n;
        cin.ignore();
        while(n--){
            string f;
            getline(cin,f);
            int h1,m1=stoi(f.substr(3,2)),h2,m2=stoi(f.substr(12,2));
            h1 = tfc(f.substr(0,8));
            h2 = tfc(f.substr(9,8));
            if((h1==h&&m1==m)||(h2==h&&m2==m)){
                ans=ans+"1";
                continue;
            }
            else if(h1<h){
                if(h2<h1)
                ans=ans+"1";
                else if(h2==h1){
                    if(m2>=m1)
                ans=ans+"0";
                else
                ans=ans+"1";}
                else if(h2>h1){
                    if(h2<h)ans=ans+"0";
                    else if(h2==h){
                        if(m2<m)ans=ans+"0";
                        else ans=ans+"1";;
                    }
                    else ans=ans+"1";;
                }

            }
            else if(h1==h){
                if(m1<m){
                    if(h2<h1) ans=ans+"1";
                    else if(h2==h1){
                        if(m2>m)ans=ans+"1";
                        else if(m2<m1) ans=ans+"1";
                        else ans=ans+"0";
                    }
                    else ans=ans+"1";
                }
                else {
                    if(h2==h1){
                        if(m2<m)ans=ans+"0";
                        else if(m2>m&&m2<m1) ans=ans+"1";
                        else ans=ans+"0";
                    }
                    else ans=ans+"0";
                }
            }
            else{
                if(h2==h&&m2>m) ans=ans+"1";
                else if(h2>h&&h2<h1) ans=ans+"1";
                else if(h2==h1){
                    if(m2<m1) ans=ans+"1";
                    else ans=ans+"0";
                }
                else ans=ans+"0";
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}