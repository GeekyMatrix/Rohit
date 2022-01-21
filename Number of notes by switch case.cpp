#include <iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter the amount"<<endl;
  cin>>n;

  char op;
  cout<<"Enter the operator you wan to perform";
  cin>>op;


  int notes100= n%100;
  int notes50 = n%50;
  int notes20 = n%20;
  int notes1 = n%1;

  switch(op){
      case '/':
      cout<<n/100<<" notes of Rs. 100"<<endl;
      cout<<notes100/20<<" notes of Rs. 20"<<endl;
      cout<<notes20/1<<" notes of Rupee 1"<<endl;
      break;

      default:
      cout<<"error";
      break;


  }
}
