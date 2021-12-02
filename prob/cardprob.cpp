#include<iostream>
using namespace std;

int main(){
    int t;
    int w, h ,n;
    cin>>t;
    for (int i=0;i<t;i++){
        int c=1;
        cin>>w>>h>>n;
        for (;w%2==0||h%2==0;)
        {
            if ((w%2==0))
            {
                w=w/2;
                c=c*2;
            }
            else
            {
                c=c*2;
                h=h/2;
            }
            
        }
        if(c>=n)
         cout<<"Yes"<<endl;
       else
       {
            cout<<"No"<<endl;
       }
}

    return 0;
}