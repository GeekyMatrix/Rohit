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
//for Round 1 to n-1
bool swapped=false;

for(int j=0;j<n-i;j++){
    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
        swapped=true;
    }
}
if(swapped==false){
    break;
}

}
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
