#include<bits/stdc++.h>
using namespace std;
struct coor{
    int x;
    int y;
};
int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<coor> v(n);
        for (coor &p:v)
        cin>>p.x>>p.y;
        bool found =true,print = false;
        for(coor &p:v){
            for (coor &po:v){
                if((abs(po.x-p.x)+abs(po.y-p.y))<=k)
                continue;
                else{
                found=false;
                break;}
            }
            if(found==true){
                cout<<1<<endl;
                print=true;
                break;
            }
            found=true;
        }
        if(print!=true)
        cout<<-1<<endl;
    }
    return 0;
}