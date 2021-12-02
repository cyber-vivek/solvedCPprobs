#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      int n,x,op=0;
      cin>>n;
      vector<int> a={0,0,0};
      for (int i=0;i<n;i++){
          cin>>x;
          if(x%3==0)a[0]++;
          else if(x%3==1)a[1]++;
          else a[2]++;
      }
      while(*max_element(a.begin(),a.end())>n/3){
        if(a[0]>n/3){
          a[1]+=a[0]-n/3;
          op+=a[0]-n/3;
          a[0]=n/3;
        }
        if(a[1]>n/3){
          a[2]+=a[1]-n/3;
           op+=a[1]-n/3;
          a[1]=n/3;
        }
        if(a[2]>n/3){
          a[0]+=a[2]-n/3;
           op+=a[2]-n/3;
          a[2]=n/3;
        }
      }
      cout<<op<<endl;
  }
  return 0;
}