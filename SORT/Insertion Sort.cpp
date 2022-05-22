#include<iostream>
using namespace std;

int main()
{
int i,n=6;
int arr[6];
for(i=0;i<n;i++){
    cin>>arr[i];
}

for(i=1;i<n;i++){
int temp=arr[i];
int j=i-1;
for(;j>=0;j--){
if(arr[j]>temp){
    arr[j+1]=arr[j];
}
else{
    break;
}
}

arr[j+1]=temp;
}

for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
