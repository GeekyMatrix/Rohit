#include <iostream>
using namespace std;

int main() {
    int i,ans1,ans2,T,n;
    int a[100];
   cin>>T;
	for(int j=1;j<=T;j++){
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	        ans1=a[0];
	        ans2=a[0];
	        
	        for(i=1;i<n;i++){
	        if(a[i]>ans1)
	            ans1=a[i];
	       
	        }
	        cout<<ans1;
	        cout<<" ";
	        for(i=1;i<n;i++){
	            if(a[i]<ans2)
	           ans2=a[i];
	            
	            }
	            cout<<ans2<<endl;
	            
	        }
	return 0;
}
