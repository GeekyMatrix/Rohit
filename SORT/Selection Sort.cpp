#include<iostream>
using namespace std;

int main()
{
int i,n=5;
int arr[5];
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n-1;i++){
int minIndex=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[minIndex])
    minIndex=j;

}
swap(arr[minIndex],arr[i]);
}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}
