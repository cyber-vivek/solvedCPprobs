#include<iostream>
using namespace std;


// Therere might be an error in the code but it is  accepted|
// In the last if statement


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,u=0,d=0,r=0,l=0;
        cin>>x>>y;
        string s;
        cin>>s;
        for (int j=0;j<s.size();j++){
            if(s[j]=='U')
            u++;
            else if(s[j]=='D')
            d++;
            else if(s[j]=='R')
            r++;
            else
            l++;
        }
         if(((x>=0&&x<=r)&&(y>=0&&y<=u))||((x>=0&&x<=r)&&(y<=0&&((-1)*d)<=y))||((x<=0&&(l*(-1))<=x)&&(y<=0&&((-1)*d)<=y))||((x<=0&&((-1)*l)<=x)&&(y>=0&&u>=y)))
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
    }
    return 0;
}