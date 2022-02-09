#include <iostream>
using namespace std;

int main() {
	int T,N,D,j,k;

cin>>T;
while(T--)
{
    int m=0;
cin>>N;
cin>>D;
int A[N];
int B[N];
//1 2 3 4 5
for(int i=0;i<N;i++){
    cin>>A[i];
}
//3 4 5
    for(k=D;k<N;k++){
    B[m]=A[k];
    m++;
}
//1 2
for(int p=0;p<D;p++){
    B[m]=A[p];
    m++;
}
//3 4 5 1 2
for(int l=0;l<N;l++){
cout<<B[l]<<" ";

}
cout<<endl;
}
	return 0;
}
