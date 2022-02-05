#include <iostream>
using namespace std;

int main() {
int T,N,j;
cin>>T;
while(T--)
{
cin>>N;
int A[N];
int B[N];
for(int i=0;i<N;i++){
    cin>>A[i];
}
// 1 2 3 4
    for(j=0;j<N;j++){
    B[N-1-j]=A[j];
    
}
for(int l=0;l<N;l++){
cout<<B[l]<<" ";

}
cout<<endl;
}


	return 0;
}
