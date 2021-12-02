#include<iostream>
using namespace std;

int main(){
    int t,n,c=0,num=0;;
    int b1,b2,b3,b4;
    cin>>t;
    for (int i=0;i<t;i++){
        cin>>n;
        for (int j= 0;j<(n/4);j++){
            while(c<4){
                char i;
                cin>>i;
                if (c==0){
                num =8*(int(i)-48);
                c++;
                continue;}
                
                if(c==1){
                    num= num+4*(int(i)-48);
                    c++;
                    continue;}
                if(c==2){
                    num= num+2*(int(i)-48);
                    c++;
                    continue;}
                if(c==3){
                    num= num+1*(int(i)-48);
                    c++;
                    continue;}
                
        }
        cout<<char(97+num);
        num=0;
        c=0;
        }
        cout<<endl;
    }
    return 0;
}