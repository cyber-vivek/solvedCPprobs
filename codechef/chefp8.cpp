#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,max,min,k;
	    cin>>n>>k;
	    max=k;
	    min=k;
	    for (int i=1;i<n;i++){
	        cin>>k;
	        if(max<k)
	        max=k;
	        if(min>k)
	        min =k;
	    }
	    cout<<2*(max-min)<<endl;
	    
	}
	return 0;
}
